#include <iostream>
#include <set>
#include <map>

void set_s() {
    std::set<int> s;
    s.insert(1);
    s.insert(1); // will be rejected, duplicate
    s.insert(2);
    for (int i : s) {
        std::cout << i << "\n";
    }
}

void multiset_s() {
    std::multiset<int> s;
    s.insert(1);
    s.insert(1); // duplicates are accepted
    s.insert(2);
    for (int i : s) {
        std::cout << i << "\n";
    }
}

void map_s() {
    std::map<int, int> m;
    m.insert(std::pair<int, int>(2, 1));
    m.insert(std::pair<int, int>(3, 10));
    m.insert(std::pair<int, int>(1, 11));

    std::cout << m[2] << "\n";
    for (auto e : m) {
        std::cout << e.first << "," << e.second << "\n";
    }
}

void multimap_s() {
    std::multimap<int, int> m;
    m.insert(std::pair<int, int>(2, 1));
    m.insert(std::pair<int, int>(3, 10));
    m.insert(std::pair<int, int>(1, 11));
    m.insert(std::pair<int, int>(1, 17));

    //std::cout << m[2] << "\n";
    for (auto e : m) {
        std::cout << e.first << "," << e.second << "\n";
    }
}

int main() {
    // set_s();
    // multiset_s();
    // map_s();
    multimap_s();
}