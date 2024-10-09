
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

double polynomial(const std::vector<double>& coeffs, double x) {
    size_t p = coeffs.size() - 1; // the maximum power of x
    double val = 0;
    for (auto it = coeffs.begin(); it != coeffs.end(); ++it) {
        val += (*it) * pow(x, p);
        --p;  // as we go the power of x decreases
    }
    return val;
}

void throw_some_exception()
{
    throw std::bad_array_new_length(); // raise a random exception
}

void exception3_s(int ec)
{
    int i = -1;
    try {
        if (ec == 1)
            throw_some_exception();
        else
            char* buf = new char[i]; // bad allocation exception
        std::cout << "this should not be seen\n";
    }
    catch (const std::bad_array_new_length& e) {
        // the code resumes here after the bad_array_new_length exception
        std::cout << "exception3_s specific exception:" << e.what() << "\n";
    }
    catch (const std::exception& e) {
        // the code resumes here after any other exception
        std::cout << "exception3_s general excption:" << e.what() << "\n";
    }
    std::cout << "exception3_s terminates gracefully!\n";
}

void exception2_s()
{
    int i = -1;
    try {
        char* buf = new char[i]; // bad allocation exception
        std::cout << "this should not be seen\n";
    }
    catch (const std::exception& e) {
        std::cout << "exception2_s catches exception:" << e.what() << "\n";
    }
    std::cout << "exception2_s terminates gracefully!\n";
}

void exception_s()
{
    int i = -1;
    try {
        char* buf = new char[i]; // bad allocation exception
        std::cout << "this should not be seen\n";
    }
    catch (...) {  // catch all exceptions
        std::cout << "simple_exception catches exception" << "\n";
    }
    std::cout << "exception_s terminates gracefully!\n";
}

class custom_exception : public std::exception {
    std::string what_s;
public:
    custom_exception(const char* msg = "this is a custom exception") :std::exception(), what_s(msg){

    }
    virtual const char* what() const throw() {
        return what_s.c_str();
    }
};


void custom_s(int ex) {
    try {
        if (ex == 1)
            throw custom_exception();
        else
            throw std::bad_array_new_length(); // raise a random exception
    }
    catch (const custom_exception& e) {
        std::cout << "custom_s specific exception:" << e.what() << "\n";
    }
    catch (const std::exception& e) {
        // the code resumes here after any other exception
        std::cout << "custom_s general exception:" << e.what() << "\n";
    }
    std::cout << "custom_s terminates gracefully!\n";
}

int main()
{
    // exception_s();
    // exception2_s();
    // exception3_s(1);
    // exception3_s(2);

    custom_s(1);
    custom_s(0);

    //std::cout << polynomial({ 1,2,3 }, 4) << "\n";

    return 0;
}
