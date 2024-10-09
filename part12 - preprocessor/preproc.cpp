#include <iostream>
#include "preproc.h"

#pragma warning( disable : 4705 )
#pragma comment( lib, "opengl32.lib" )

#ifdef __cplusplus
// the following definitions follow the C standard
// note the opening bracket, look for the closing bracket
extern "C" {
#endif
    // function that can be called both from C and C++ code
    void some_function();
#ifdef __cplusplus
    // end of C type definitions
    // after the bracket we have C++ style definitions
}
// C++ definitions can follow (always inside #ifdef/#endif block!)
class some_class {
public:
    some_class() {}
};
#endif

// the following function has C style definition
extern "C" void some_function() {

}

#ifndef __PREPROC_H__
#error include preproc.h to proceed
#endif

#define __DEBUG__

#define PI 3.1415926

int main() {
#ifdef __DEBUG__
    std::cout << "debug enabled\n";
#else
    std::cout << "release enabled\n";
#endif

    double radius = 1.234;
    double circumference = 2 * PI * radius;

    std::cout << __cplusplus << "\n";
}