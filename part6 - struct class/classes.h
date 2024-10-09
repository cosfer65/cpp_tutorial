#ifndef __classes_h__
#define __classes_h__

class vec3d {
private:
    double x;
    double y;
    double z;
    static int counter;

public:
    vec3d(double _x = 0, double _y = 0, double _z = 0);
    vec3d(const vec3d& org);
    ~vec3d();
    vec3d& move_to(double x, double y, double z);
    vec3d& move_by(double dx, double dy, double dz);
    double X() const;
    double X();
    double Y() const;
    double Z() const;

    static int get_counter() {
        return counter;
    }

    vec3d operator+(const vec3d& v2) {
        return vec3d(x + v2.x, y + v2.y, z + v2.z);
    }
};

inline vec3d add_vectors(const vec3d& v1, const vec3d& v2) {
    return vec3d(v1.X() + v2.X(), v1.Y() + v2.Y(), v1.Z() + v2.Z());
}

#endif //__classes_h__
