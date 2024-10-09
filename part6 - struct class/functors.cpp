#include <iostream>
#include <vector>
// #include <functional>


bool is_odd(int i) {
    return (i % 2 == 1);
}
bool is_even(int i) {
    return (i % 2 == 0);
}

class odd_or_even {
    int chk;
public:
    odd_or_even(int c) :chk(c % 2) {}
    bool operator()(int value) {
        if (value % 2 == chk) return true;
        return false;
    }
};

// the template enables the function to accept both function pointers and functors
template<typename F>
void check_values(std::vector<int>& vals, std::vector<int>& results, F& check_fun) {
    for (auto i : vals) {
        if (check_fun(i)){
            results.push_back(i);
        }
    }
}

int main() {
    odd_or_even odds(1); // with odd numbers it checks for odds
    odd_or_even evens(0); // with even numbers it checks for evens
    std::vector<int> values = { 0,1,2,3,4,5,6,7,8,9 };

    // check using functors
    for (auto i : values) {
        if (odds(i))
            std::cout << i << " is odd\n";
        if (evens(i))
            std::cout << i << " is even\n";
    }
    // check with function pointers
    for (auto i : values) {
        if (is_odd(i))
            std::cout << i << " is odd\n";
        if (is_even(i))
            std::cout << i << " is even\n";
    }

    // reorder with functor
    std::vector<int> results;
    check_values(values, results, odds);
    check_values(values, results, evens);
    for (auto r : results) {
        std::cout << r << ",";
    }
    std::cout << "\n";

    // reorder with function pointers
    results.clear();
    check_values(values, results, is_odd);
    check_values(values, results, is_even);
    for (auto r : results) {
        std::cout << r << ",";
    }
    std::cout << "\n";

}
