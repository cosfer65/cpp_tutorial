#include <iostream>
#include "classes.h"

int vec3d::counter = 0;

vec3d::vec3d(double _x /*= 0*/, double _y /*= 0*/, double _z /*= 0*/) :x(_x), y(_y), z(_z) {
    std::cout << "default/initializing constructor\n";
    ++counter;
}
vec3d::vec3d(const vec3d& org) : x(org.x), y(org.y), z(org.z) {
    std::cout << "copy constructor\n";
    ++counter;
}
vec3d::~vec3d() {
    std::cout << "vec3d goes out of scope\n";
    --counter;
}
vec3d& vec3d::move_to(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
    return *this;
}
vec3d& vec3d::move_by(double dx, double dy, double dz) {
    x += dx;
    y += dy;
    z += dz;
    return *this;
}
double vec3d::X() const{
    std::cout << "const X()\n";
    return x;
}
double vec3d::X() {
    std::cout << "non const X()\n";
    return x;
}
double vec3d::Y() const {
    return y;
}
double vec3d::Z() const {
    return z;
}

void someFunction(vec3d* pt) {
    pt->move_by(2, 2, 2);
    //pt->x = 10;  // generates compilation error
}

int main() {
    // declare and initialize a vec3d
    vec3d pt = { 1,1,1 };
    // move it
    pt.move_by(2, 3, 4);
    // directly set a coordinate
    //pt.x = 23; // private member, compilation error

    // default constructor
    vec3d pt1;
    // initialization constructor
    vec3d pt3(1, 2, 3);
    // copy constructor
    vec3d pt4(pt3);

    std::cout << "pt4.x=" << pt4.move_by(5, 6, 7).X() << "\n";

    vec3d my_point(2, 3, 1);
    my_point.move_to(5, 6, 2);

    const vec3d c_point(4, 4, 4);
    double x = c_point.X();

    std::cout << "active objects:" << vec3d::get_counter() << "\n";

    vec3d a1(1, 2, 3);
    vec3d a2(4, 5, 6);
    vec3d a3 = add_vectors(a1, a2);
    a3 = a1 + a2;
    std::cout << "pt1:" << a3.X() << "," << a3.Y() << "," << a3.Z() << "\n";
}
