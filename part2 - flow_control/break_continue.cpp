#include <iostream>

int calc_sum(int start, int finish, int step, int max_limit) {
    int sum = 0;  // initialize the sum
    int i = start;    // initialize the condition
    while (i <= finish) {   // check the condition
        sum += i;
        if (sum > max_limit) { // limit was passed?
            sum -= i;   // need to go back
            break;      // and terminate the loop
        }
        i += step;    // move to the next number
    }
    return sum;
}

void continue_example() {
    int i;

    for (i = 0; i < 10; ++i) {
        std::cout << "i=" << i << "\n";
        if (i == 5)
            continue;
        std::cout << "what a nice day!\n";
    }

    // ------------------------------------------

    i = 0;
    while (i < 10) {
        std::cout << "i=" << i << "\n";
        if (i == 5)
            continue;
        std::cout << "what a nice day!\n";
        ++i;
    }

}

double  calc_sqrt(double num) {
    if (num < 0)  // no square root for negative 
        return 0; // stop processing and return
    double sq_rt = 0;
    // do the algorithm to calculate square root
    // store it in sq_rt, and return it
    return sq_rt;
}

int main() {
    int sum = calc_sum(1, 20, 3, 45);
    std::cout << "sum=" << sum << "\n";

    continue_example();
}