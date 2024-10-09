#include <iostream>

// template function
template<typename T>
T absolute_value(T a)
{
    if (a >= T(0))
        return a;
    return -a;
}

void use_template_function() {
    int i = -5;
    int av = absolute_value(i);
    std::cout << av << "\n";
}

// template specializaton
template<>
int absolute_value<int>(int a)
{
    std::cout << "int specialization\n";
    if (a >= 0)
        return a;
    return -a;
}

// template class
template<class T>
class vec3d {
    T data[2];
public:
    vec3d(T x = T(0), T y = T(0)) : data{ x,y } {
    }
    void print() {
        std::cout << data[0] << ", " << data[1] << "\n";
    }
};

// template specializaton
template<>
class vec3d<int> {
    int data[2];
public:
    vec3d(int x = 0, int y = 0) : data{ x,y } {

    }
    void print() {
        std::cout << "integer vec3d " << data[0] << ", " << data[1] << "\n";
    }
};

// template metaprogramming
// this function is executed at runtime
int power(int base, int exp)
{
    int r = 1;
    while (exp)
    {
        r *= base;
        --exp;
    }
    return r;
}

// the template can be evaluated at compile time
// template to calculate powers of integers
// recursively defined struct 
template<int base, int exp>
struct powerOf
{
    enum { value = base * powerOf<base, exp - 1>::value };
};
// special case when we reach 0
template<int base>
struct powerOf<base, 0>
{
    enum { value = 1 };
};


int main()
{
    std::cout << "Hello from part 9!\n";

    std::cout << absolute_value(-3.5) << "\n";
    std::cout << absolute_value(4) << "\n";

    // design data, double precision
    vec3d<double> pt(10, 21.3);
    pt.print();
    // screen coordinates, integers
    vec3d<int> ipt(31, 23);
    ipt.print();

    int some_limit = power(3, 4);
    std::cout << power(3, 4) << "\n";
    std::cout << powerOf<3, 4>::value << "\n";

    return 0;
}
