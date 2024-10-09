#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <set>

void sort_s() {
    std::vector v = { 1,4,8,2,-3,7,9,-5,5,20,6 };
    // the lambda function determines ascending or descending order
    std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
    for (auto i : v) {
        std::cout << i << "\n";
    }
}

void partial_sort_s()
{
    std::vector<int> v = { 10, 8, 5, 4, 3, 19, 0, 9, 7 };
    for (auto i : v)
        std::cout << i << ", ";
    std::cout << "\n";
    std::cout << *(v.begin() + 3) << "\n";
    std::partial_sort(v.begin(), v.begin() + 3, v.end());
    for (auto i : v)
        std::cout << i << ", ";
    std::cout << "\n";
}

void find_s() {
    std::vector<int> v = { 10, 8, 5, 4, 3, 19, 0, 9, 7 };
    auto f = std::find(v.begin(), v.begin() + 5, 10);
    if (f == v.begin() + 5) // the end of the range reached
        std::cout << "not found\n";
    else
        std::cout << "found:" << *f << " at position:" << f - v.begin() << "\n";
}

void find_if_s() {
    std::vector<int> v = { 10, 8, 5, 4, 3, 19, 0, 9, 7 };
    // find the first number bigger than 15
    auto f = std::find_if(v.begin(), v.end(), [](int i) { return i >= 15; });
    if (f == v.end()) // the end of the range reached
        std::cout << "not found\n";
    else
        std::cout << "found:" << *f << " at position:" << f - v.begin() << "\n";
}

void find_first_of_s() {
    std::vector<int> v = { 10, 8, 5, 4, 3, 19, 0, 9, 7 };
    std::vector<int> s = { 1, -2, 9 };
    auto f = std::find_first_of(v.begin(), v.end(), s.begin(), s.end());
    if (f == v.end()) // the end of the range reached
        std::cout << "not found\n";
    else
        std::cout << "found:" << *f << " at position:" << f - v.begin() << "\n";
}

void binary_search_s() {
    std::set<int> v = { 10, 8, 5, 4, 3, 19, 0, 9, 7 };

    auto f = std::binary_search(v.begin(), v.end(), 19);
    if (!f) // the end of the range reached
        std::cout << "not found\n";
    else
        std::cout << "found\n";
}

void bounds_s() {
    std::vector<int> v = { 1,2,3,4,4,4,4,5,6,7,8,9,10 };

    // find first occurence of 4
    auto lb = std::lower_bound(v.begin(), v.end(), 4);
    // find last occurence of 4
    auto ub = std::upper_bound(v.begin(), v.end(), 4);
    for (auto i = lb; i < ub; ++i)
        std::cout << *i << " ";
    std::cout << "\n";
}

void copy_s() {

    std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
    std::vector<int> l = { 21,22,23,24 };

    std::copy(l.begin(), l.end(), v.begin() + 2);

    for (auto i : v)
        std::cout << i << " ";
    std::cout << "\n";
}

void copy_if_s() {

    std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
    std::vector<int> l = { 21,22,23,24 };

    std::copy_if(l.begin(), l.end(), v.begin() + 2, [](int i) { return (i%2)==0; });

    for (auto i : v)
        std::cout << i << " ";
    std::cout << "\n";
}

void remove_s() {
    std::vector<int> v = { 1,2,3,4,5,6,4,7,8,9,10 };
    auto it = std::remove(v.begin(), v.end(), 4);
    std::cout << "last after removal (0 based!):" << it - v.begin() << "\n";

    for (auto i : v)
        std::cout << i << " ";
    std::cout << "\n";
}

void remove_if_s() {
    std::vector<int> v = { 1,22,31,40,5,6,7,8,9,10 };
    auto it = std::remove_if(v.begin(), v.end(), [](int i) { return (i % 2) == 1; });
    std::cout << "last after removal (0 based!):" << it - v.begin() << "\n";

    for (auto i : v)
        std::cout << i << " ";
    std::cout << "\n";
}

void merge_s() {
    std::vector<int> v1 = { 1,3,5,7,9 };
    std::vector<int> v2 = { 2,4,6,8,10 };
    std::vector<int> v3(v1.size() + v2.size()); // preallocate space!!
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for (auto i : v3)
        std::cout << i << " ";
    std::cout << "\n";
}

void min_max_s() {
    auto mn = std::min({ 1,3,9,4,6,10,5,8,7 });
    std::cout << "min:" << mn << "\n";
    // using a custom comparison we can get the opposite result!
    auto mx = std::min({ 1,3,9,4,6,10,5,8,7 }, [](int i, int j) { return (i > j); });
    std::cout << "max:" << mx << "\n";
    auto mx2 = std::max({ 1,3,9,4,6,10,5,8,7 });
    std::cout << "max:" << mx2 << "\n";
}

int main() {
    // sort_s();
    // partial_sort_s();
    // find_s();
    // find_if_s();
    // find_first_of_s();
    // binary_search_s();
    // bounds_s();
    // copy_s();
    // copy_if_s();
    // remove_s();
    // remove_if_s();
    // merge_s();
    min_max_s();
}