#include <iostream>
#include <vector>

void printVec(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i)
        std::cout << i << ". " << vec[i] << "\n";
}

void printVec(std::vector<std::vector<int>> v2d) {
    for (int r = 0; r < v2d.size(); r++) { // over rows
        std::vector<int>& t = v2d[r]; // reference to the row
        for (int c = 0; c < 10; c++) { // over columns
            std::cout << t[c] << " ";
        }
        std::cout << "\n";
    }
}

void displayArray_ptr(int* arr, int many) {
    for (int i = 0; i < many; i++)
        std::cout << "v3 " << arr[i] << "\n";
}

int main() {
    std::vector<int> vec = { 1,3,5 };
    std::cout << vec[1] << "\n";
    vec.push_back(7);
    vec.push_back(9);

    printVec(vec);
    displayArray_ptr(&vec[0], vec.size());

    std::vector<std::vector<int>> v2d;
    for (int r = 0; r < 5; r++) { // create the rows...
        std::vector<int> t; // create a new row
        v2d.push_back(t);  // add it to the 'array'
        for (int c = 0; c < 10; c++) { 
            v2d[r].push_back(r * 10 + c); // add elements to the row
        }
    }
    printVec(v2d);
}
