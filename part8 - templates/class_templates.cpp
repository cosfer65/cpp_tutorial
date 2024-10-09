#include <iostream>

template <typename T>
class vec2d {
    T x;
    T y;
public:
    vec2d(T _x=T(0), T _y=T(0)) :x(_x), y(_y) {
    }
};

int main() {
    vec2d<int> some_pixel;
    vec2d<float> some_coordinates;
}