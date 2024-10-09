#include <iostream>


// multilevel inheritance
class vehicle {
public:
    vehicle() { std::cout << "vehicle\n"; }
    virtual ~vehicle() {}
    virtual void print() = 0;
};
// car is a vehicle
class car :public vehicle {
public:
    car() { std::cout << "car\n"; }
    virtual ~car() {}
    virtual void print() {
        std::cout << "i am a car\n";
    }
};
// sports_car is a car, and a vehicle
class sports_car :public car {
public:
    sports_car() { std::cout << "sports car\n"; }
    virtual ~sports_car() {}
    virtual void print() {
        car::print();
        std::cout << "i am a sports car\n";
    }
};
 
// multiple
class serializable {
public:
    serializable() { std::cout << "serializable\n"; }
};
class base_a : virtual public serializable {
public:
    base_a() { std::cout << "base_a\n"; }
    virtual void print() {
        std::cout << "base_a\n";
    }
};

class base_b : virtual public serializable {
public:
    base_b() { std::cout << "base_b\n"; }
    virtual void print() {
        std::cout << "base_b\n";
    }
};

class class_c :public base_a, public base_b {
public:
    class_c() {}
    virtual void print() {
        std::cout << "class_c\n";
    }
};

int main() {
    sports_car sc;
    sc.print();
    class_c c;
    // derived_level2 dl2;
    // 
    // my_car c;
    // // access the car derived function
    // c.car::print();
    // // access the made_by_me derived function
    // c.made_by_me::print();
    // // access the native function
    // c.print();

}