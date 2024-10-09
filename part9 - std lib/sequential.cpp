#include <iostream>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>

void arrays() {
    std::array<int, 3> ar = { 1,2,3 };
    for (int i = 0; i < 3; i++)
        std::cout << ar[i] << "\n";
}

void vectors() {
    std::vector<int> v = { 1,2,3 };
    size_t s = v.size();
    for (int i = 0; i < s; i++) {
        std::cout << v[i] << "\n";
    }
}

void forw_list() {
    std::forward_list<int> l;
    l.assign({ 1,2,3 });
    for (int i : l) {
        std::cout << i << "\n";
    }
}

void list_s() {
    std::list<int> l;
    l.assign({ 1,2,3 });
    for (int i : l) {
        std::cout << i << "\n";
    }
}

void dequeue_s() {
    std::deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i : d) {
        std::cout << i << "\n";
    }
}

int main() {
    // arrays();
    // vectors();
    // forw_list();
    // list_s();
    dequeue_s();
}