// add_functions.cpp
// this file contains functions used to add numbers
//

#include <iostream>
#include "add_functions.h"

// a global variable that counts 
// how many times our functions are called
int myGlobalCount = 0;

static int anInternalCount = 0;

// a static function declaration
static int internal_function();

// a static function definition
static int internal_function()
{
    ++anInternalCount;
    return 12;
}

// a function that adds two numbers
double add_numbers(double a, double b) {
    // increment the global variable
    ++myGlobalCount;

    internal_function();

    // calculate the sum
    double sum = a + b;
    // and return it
    return sum;
}

// a function that adds three numbers
double add_numbers(double a, double b, double c) {
    // increment the global variable
    ++myGlobalCount;

    // calculate the sum
    double sum = a + b + c;
    // and return it
    return sum;
}

// or add a double and an integer
double add_numbers(double a, int b) {
    // increment the global variable
    ++myGlobalCount;

    // calculate the sum
    double sum = a + b;
    // and return it
    return sum;
}

// or add an integer and a double
double add_numbers(int a, double b) {
    // increment the global variable
    ++myGlobalCount;

    // calculate the sum
    double sum = a + b;
    // and return it
    return sum;
}
