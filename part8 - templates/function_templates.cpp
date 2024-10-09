#include <iostream>

// template function
template<typename T>
T absolute_value(T a)
{
    if (a >= T(0))
        return a;
    return -a;
}

int main() {
    int i = -5;
    int av = absolute_value(i);
    std::cout << av << "\n";
    float f = -5.45;
    float fav = absolute_value(f);
    std::cout << fav << "\n";
}
