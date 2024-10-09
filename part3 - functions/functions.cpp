// functions.cpp
//

#include <iostream>
// include the files with the declarations
#include "functions.h"
#include "add_functions.h"


// the main function
int main()
{
    // call the function and get the return value
    int ret = simple_function(8, 2.34);
    std::cout << "function returned:" << ret << "\n";

    // we may ignore the return value
    simple_function(8, 2.34);


    // calculate and store the sum of two numbers
    // the function is declared in part4b.h and
    // implemented in part4b.cpp
    double result = add_numbers(2.3, 4.5);

    // three doubles
    result = add_numbers(2.3, 4.5, 6.7);
    // or a double and an integer
    result = add_numbers(2.3, 4);
    // or add an integer and a double
    result = add_numbers(5, 6.7);
    std::cout << "result = " << result << "\n";

    // print the global variable
    std::cout << "myGlobalCount = " << myGlobalCount << "\n";

    for (int i = 0; i < 5; ++i) {
        std::cout << "static count=" << static_variables() << "\n";
    }


    return 0;
}

int simple_function(int arg1, double arg2) {
    // print the arguments received
    std::cout << "arg1=" << arg1 << ", arg2=" << arg2 << "\n";
    // and return some value
    return 3;
}

// the definition cannot declare the default arguments
// we write them in comments so we do not forget
int multiply(int i /*= 1*/, int times /*= 1*/)
{
    return i * times;
}

void local_variables(int i, double d) {
    //int j;

    for (int k = 0; k < 10; ++k) {
        std::cout << k << "\n";
    }

    //++k;   // error k is out of scope

    // i is a local variable so the next statement is perfectly valid,
    i = 100;

    if (i > 10) {
        double l = 100 * d;
        std::cout << "l=" << l << "\n";
    }

    //std::cout << l << "\n";  // error l is out of scope
}

int static_variables() {
    // count how many times the function was called
    static int localCount = 0;
    ++localCount;
    return localCount;
}