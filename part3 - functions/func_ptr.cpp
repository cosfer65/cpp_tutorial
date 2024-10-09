#include <iostream>

void function(int i) {
    std::cout << "i=" << i << "\n";
}

// take the function to use as argument
void check_out(int value, void (*fun_ptr)(int)) {
    // use the function we were told
    fun_ptr(value);
}

int main() {
    // get the function pointer
    void (*fun_ptr)(int) = function;
    // and use it to call it
    fun_ptr(33);

    for (int i = 0; i < 4; i++) {
        // pass the pointer as an argument
        check_out(i * 3, function);
    }
}
