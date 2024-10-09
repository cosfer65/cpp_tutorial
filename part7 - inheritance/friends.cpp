#include <iostream>

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
    friend void some_friend(base& b);
    friend class good_friend;
};

class good_friend {
public:
    good_friend(base* b=nullptr){
    }

    void show_all(base* b = nullptr) {
        if (b == nullptr)
            return;
        std::cout << b->priv_member << "," << b->prot_member << "," << b->publ_member << "\n";
    }
};

void some_friend(base& b) {
    std::cout << b.priv_member << "," << b.prot_member << "," << b.publ_member << "\n";
}

int main() {
    base b;
    good_friend gf;
    gf.show_all(&b);
    some_friend(b);
}
