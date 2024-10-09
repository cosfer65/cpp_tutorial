#include <iostream>

int byrefInt(int* val) {
    *val = 2 * (*val);
    return 1;
}

int sum_data(int* data, int many) {
    int sum = 0;
    for (int i = 0; i < many; ++i) {
        sum += *data;
        ++data;  // vec3d to the next in line
    }
    return sum;
}

int main() {
    std::cout << "hello world\n";

    int* intPtr;        // a pointer to an integer
    int int_var;        // an integer variable
    intPtr = &int_var;  // the pointer now points to the variable

    int_var = 10;  // setting the value
    std::cout << int_var << "\n";
    *intPtr = 12;  // and changing it
    std::cout << int_var << ", " << *intPtr << "\n";
    std::cout << intPtr << "\n";

    int many = 100;
    int* dynPtr = new int[many];
    int* hiScores = dynPtr;  // another pointer to the same location
    // iterating over the allocated memory with pointer arithmetic
    for (int i = 0; i < many; ++i) {
        *hiScores = i; // set the value
        ++hiScores;    // advance the second pointer
        // adding an index to the first pointer
        std::cout << *(dynPtr + i) << "\n";
    }
    int s = sum_data(dynPtr, many);
    std::cout << "s=" << s << "\n";

    delete [] dynPtr;

    int* somePtr = new int;
    delete somePtr;

    int cv = 12;
    byrefInt(&cv);
    std::cout << cv << "\n";

    return 0;
}