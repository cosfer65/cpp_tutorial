#include <iostream>

// a function returninf always 0
int zero_return() {
    return 0;
}
// an a function returning always true
bool is_valid() {
    return true;
}

void combined_logic() {
    int value;

    // for AND both must be true
    // this executes both if the first is true
    // and only the first if the first fails
    if (value > 10 && value < 20) {}

    // for OR only one needs to be true
    // this may execute only the first and if it fails
    // it executes the second
    if (value > 10 || value < 20) {}
}

int main()
{
    double a;                                   // declare our variables
    std::cout << "tell us your grade (1-20):";   // give the user a hint
    std::cin >> a;              // read the value of a from the keyboard

    if (a >= 10) {
        std::cout << "pass\n";
    }
    else {
        std::cout << "fail\n";
    }
    std::cout << "thank you\n";

    // and the calling code could be like
    if (zero_return()) {  // since the function returns 0, this is always false
        std::cout << "if you see this message something went wrong\n";
    }
    if (is_valid()) {  // this is always true
        std::cout << "this is a really valid result\n";
    }

}


