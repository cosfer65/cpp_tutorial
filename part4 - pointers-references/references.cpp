#include <iostream>

int byrefVar(int& ref) {
    ref = 24;
    return 1;
}

int main() {
    int var;
    int& ref = var;

    ref = 14;
    std::cout << "var=" << var << "\n";

    byrefVar(var);
    std::cout << "var=" << var << "\n";
}