#include <iostream>
#include <unordered_set>
#include <unordered_map>

void unordered_set_s() {
    std::unordered_set<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(1); // will be rejected, duplicate
    s.insert(6);
    s.insert(4);
    for (int i : s) {
        std::cout << i << "\n";
    }
}

void unordered_multiset_s() {
    std::unordered_multiset<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(1); // will be rejected, duplicate
    s.insert(6);
    s.insert(4);
    for (int i : s) {
        std::cout << i << "\n";
    }
}

void unordered_map_s() {
    std::unordered_map<int, int> m;
    m.insert(std::pair<int, int>(2, 1));
    m.insert(std::pair<int, int>(3, 10));
    m.insert(std::pair<int, int>(3, 15)); // will fail, no duplicates
    m.insert(std::pair<int, int>(1, 11));
    m[2] = 16;   // will replace previous, no duplicates
    for (auto i : m) {
        std::cout << i.first << ", " << i.second << "\n";
    }
}

void unordered_multimap_s() {
    std::unordered_multimap<int, int> m;
    m.insert(std::pair<int, int>(2, 1));
    m.insert(std::pair<int, int>(3, 10));
    m.insert(std::pair<int, int>(3, 15));
    m.insert(std::pair<int, int>(1, 11));
    for (auto i : m) {
        std::cout << i.first << ", " << i.second << "\n";
    }
}

int main() {
    // unordered_set_s();
    // unordered_multiset_s();
    // unordered_map_s();
    unordered_multimap_s();
}