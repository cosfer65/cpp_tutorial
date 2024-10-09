#include <iostream>
#include <vector>

void iterators_s() {
    std::vector<int> v={ 1,4,5,3,8,7,6 };
    std::vector<int>::iterator it;

    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << "\n";
}

int main() {
    iterators_s();
}