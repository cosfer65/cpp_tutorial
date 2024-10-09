#include <iostream>
#include <cmath>

template<typename T>
double absolute_value(T a)
{
    if (a >= T(0))
        return a;
    return -a;
}

class complex {
public: 
    double a, b;
    complex(double _a, double _b) :a(_a), b(_b) {
    }
};

template<>
double absolute_value<complex>(complex a)
{
    return sqrt(a.a * a.a + a.b * a.b);
}

template<typename T>
class templated {
public:
    T value;
    templated(T v) : value(v) {
        std::cout << "generic implementation\n";
    }
};
template<>
class templated<int> {
public:
    int value;
    templated(int v) : value(v){
        std::cout << "specialized implementation\n";
    }
};


int main() {
    std::cout << absolute_value(2.0001) << "\n";

    complex c(3, 4.5);
    std::cout << absolute_value(c) << "\n";

    templated d(7.2); // uses the generic
    templated i(7);   // uses the specialized
}
