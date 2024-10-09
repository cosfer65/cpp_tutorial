#include <iostream>
#include "inheritance.h"

void some_friend(base& b) {
    // we have access in the friend
    std::cout << b.priv_member << ", " << b.prot_member << "\n";
}


int main()
{
#if 0
    quad q;
    std::cout << "type of q=" << q.type() << "\n";
    std::cout << "sides of q=" << q.num_sides() << "\n";
    std::cout << "diagonals of q=" << q.num_diagonals() << "\n";
    
    tria t;
    std::cout << "type of t=" << t.type() << "\n";
    std::cout << "sides of t=" << t.num_sides() << "\n";
    
    geom_shape* ptr = new tria;
    std::cout << "sides of ptr=" << ptr->num_sides() << "\n";
    ptr->print();

    tria* tptr = dynamic_cast<tria*>(ptr);
    if (tptr)
        std::cout << "triangle\n";
    quad* qptr = dynamic_cast<quad*>(ptr);
    if (qptr)
        std::cout << "quad\n";

    std::cout << tptr << ", " << qptr << "\n";

    std::cout << typeid(*ptr).name() << "\n";
    delete ptr;
#endif

    der_publ pbl;
    der_prot prt;
    der_priv prv;
    
    // all public members of base are accessible
    pbl.fun_base();
    std::cout << pbl.publ_member << "\n";

    // no base functionality is available directly
    prt.fun_prot();

    // no base functionality is available directly
    // as well
    prv.fun_priv();
}
