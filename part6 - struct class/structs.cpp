#include <iostream>
#include <cmath>

// struct structName {
//     dataType var1;
//     dataType var2;
//     ...
// };

struct vec3d {
    float x;
    float y;
    float z;
};

struct triangle {
    vec3d p1;
    vec3d p2;
    vec3d p3;
};

// calculate euclidean distance
double distance(vec3d& p1, vec3d& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double dz = p2.z - p1.z;
    double l = sqrt(dx * dx + dy * dy + dz * dz);
    return l;
}

int main() {
    vec3d p1;
    vec3d p2 = { 2,3,5 }; // initialize the vec3d
    std::cout << p2.x << "\n";

    triangle t = { {1,1,1},{2,2,2},{3,3,1} };
    double side_length = distance(t.p1, t.p2);
    std::cout << side_length << "\n";
}