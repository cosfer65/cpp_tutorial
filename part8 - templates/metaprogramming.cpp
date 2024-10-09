#include <iostream>

int classic_factorial(int v) {
    if (v <= 1) return 1;
    return v * classic_factorial(v - 1);
}

// the basic template struct
template<int v>
struct factorial {
    enum { value = v * factorial<v - 1>::value };
};
// specialization required to terminate
template<>
struct factorial<1> {
    enum { value = 1 };
};

int main() {
    const int i = 3;
    int k = 2 * i;
    int j = 1 << 3;

    std::cout << classic_factorial(4) << "\n";
    std::cout << factorial<5>::value << "\n";
}
