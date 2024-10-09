#ifndef __inheritance_h__
#define __inheritance_h__

enum g_type { t_tria, t_quad };

class geom_shape {
private:
    g_type m_type;
protected:
    void protected_print() {
        std::cout << "protected_print ";
    }
public:
    geom_shape(g_type t):m_type(t) {
    }
    virtual ~geom_shape() {
    }
    g_type type() const {
        return m_type;
    }
    virtual int num_sides() = 0;
    virtual void print() {
        std::cout << m_type;
    }
};

class tria : public geom_shape {
public:
    tria() : geom_shape(t_tria) {
    }
    virtual ~tria() {
    }
    virtual int num_sides() {
        return 3;
    }
    virtual void print() {
        protected_print();
        geom_shape::print();
        std::cout << " tria\n";
    }
};

class quad : public geom_shape {
public :
    quad() : geom_shape(t_quad) {
    }
    virtual ~quad() {
    }
    virtual int num_sides() {
        return 4;
    }
    int num_diagonals() {
        return 2;
    }
    virtual void print() {
        geom_shape::print();
        std::cout << " quad\n";
    }
};

class base {
private:
    int priv_member;
protected:
    int prot_member;
public:
    int publ_member;

    base() :priv_member(1), prot_member(2), publ_member(3) {
    }
    void fun_base() {
        std::cout << "base:" << priv_member << ", " << prot_member << ", " << publ_member << "\n";
    }
    friend void some_friend(base& gs);
};

class der_publ :public base {
public:
    der_publ() {}

    void fun_publ() {
        fun_base();
        std::cout << "publ:" << prot_member << ", " << publ_member << "\n";
    }
};

class der_prot :protected base {
public:
    der_prot() {}
    void fun_prot() {
        fun_base();
        std::cout << "prot:" << prot_member << ", " << publ_member << "\n";
    }
};

class der_priv :private base {
public:
    der_priv() {}
    void fun_priv() {
        fun_base();
        std::cout << "priv:" << prot_member << ", " << publ_member << "\n";
    }
};
#endif // __inheritance_h__
