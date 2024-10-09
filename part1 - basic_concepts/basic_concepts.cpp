/* this is our first program
    created : 2024
    purpose : show basic concepts of C++
    copyright : add your name here
*/
#include <iostream>   // Standard Library header
#include "basic_concepts.h"    // custom user-defined header

// our main function, the entry vec3d to our program
int main()
{
    std::cout << "Hello from part 1!\n";
    {
        // here are some variables
        int a = -135;
        unsigned int b = 782;
        long c = 2837465;
        double d = 1.234;
        char e = 'a';
    }
    {
        // here are some constants
        const int c = 10;     // const variable
        const int& cr = c;    // reference to const variable
        const int* cp = &c;   // pointer to const variable
    }
    {
        // some operators
        int a, b, c;   // first declare some variables
        a = 10;        // assign a value to a
        b = a + 10;    // b is a plus a constant value
        c = a + b;     // c is the sum of a and b
    }


    return 0;
}

void variables()
{
    int a = -135;
    unsigned int b = 782;
    long c = 2837465;
    double d = 1.234;
    char e = 'a';
}

void constants()
{
    const int c = 10;     // const variable
    const int& cr = c;    // reference to const variable
    const int* cp = &c;   // pointer to const variable
    // the following statements generate errors
    // because we  try to modify constant data
    // c = 1;
    // cr = 2;
    // *cp = 3;
}

void operators()
{
    int a, b, c;   // first declare some variables
    a = 10;        // assign a value to a
    b = a + 10;    // b is a plus a constant value
    c = a + b;     // c is the sum of a and b
}

void statements()
{
    int i;           // variable declaration is a valid statement
    double d = 0.45; // variable declaration and initialization is a valid statement too
    // sum = a + b + c; // this has undiclared variables, which is an error!
    // diff = d - e;    // this one too!
}

// calculates the trinomial giver the coefficients and the value of x
double trinomial(double a, double b, double c, double x)
{
    double result = a * x * x + b * x + c;
    return result;
}

// the definition in the source
namespace lfcpp {
    float calculate_avarage(float a, float b) {
        float sum = a + b;
        float avg = sum / 2;
        return avg;
    }
}

void sample_function_call()
{
    // call the trinomial function
    double value = trinomial(1.2, 2.3, 3.4, 4.5);

    // call 'calculate_avarage' from the 'lfcpp' namespace
    float f = lfcpp::calculate_avarage(12.3f, 14.6f);

    // alternatively
    using namespace lfcpp;
    float fv = calculate_avarage(2.3f, 4.5f);
}

void basic_io()
{
    double a;
    std::cout << "insert a:";     // give the user a hint
    std::cin >> a;                // read the value of a from the keyboard
    std::cout << "input was:" << a << "\n";  // print what the user typed
}
