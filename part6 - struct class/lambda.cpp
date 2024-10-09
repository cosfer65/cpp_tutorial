#include <iostream>
#include <vector>


// this function iterates the vector and
// counts how many times the 'func' returns true
template<class T, class func>
int count_objects(std::vector<T>& v, func f)
{
    int count = 0;
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (f(*it))
            ++count;
    }
    return count;
}

void lambda_s()
{
    // basic lambda, we create an inline function
    auto greet = []() {std::cout << "lambda sample\n"; };
    greet();

    std::vector<int> v= { 1, 8, 3, 4, 0, 9, 7, 2, 1, 3, 5, 6, 3, 4, 7, 2, 1, 8, 5, 6, 3, 9, 7, 2 };
    // count how many '3's are in the vector
    auto se = [](int i) { return i == 3; };
    std::cout << "found:" << count_objects(v, se) << "\n";

    // count how many numbers in the vector are between 3 and 7
    // we can write the code inline, but it is not so readable
    std::cout << "found:" << count_objects(v, [](int i) { return i >= 3 && i <= 7; }) << "\n";

    int x = 2;
    // here we define a lambda function that returns 'bool'
    // the return type in this example is optional
    // it is also accessing the local variable by value
    auto l = [=](int y) ->bool { return y * x; };
    std::cout << "result:" << l(3) << "\n";

    // here we are accessing x by reference
    auto lr = [&](int y) {++x; return y * x; };
    std::cout << "result:" << x << ", " << lr(4) << "\n";
}


int main(){
    lambda_s();
}