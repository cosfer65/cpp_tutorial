#include <iostream>
#include <vector>

void modifyVector(std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i)
        v[i] += 3;
}

void displayArray(int arr[5]) {
    for(int i = 0; i < 5; i++)
        std::cout << "v1 "<<arr[i] << "\n";
}

void displayArray(int arr[], int many) {
    for (int i = 0; i < many; i++)
        std::cout << "v2 " << arr[i] << "\n";
}

void displayArray_ptr(int* arr, int many) {
    for (int i = 0; i < many; i++)
        std::cout << "v3 "  << arr[i] << "\n";
}

void displayArray(int arr[][10], int rows) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < 10; c++) {
            std::cout << arr[r][c] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int arr[]{ 1,2,3,4,5 };
    displayArray(arr);
    displayArray(arr, 5);
    displayArray_ptr(arr, 5);

    int md_hiScores[5][10];
    for (int game = 0; game < 5; game++) {
        for (int player = 0; player < 10; player++) {
            md_hiScores[game][player] = game * 10 + player;
        }
    }
    displayArray(md_hiScores, 5);

}

void foo(){
    std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
    modifyVector(vec);
    // view the results
    for (int i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << "\n";


    int hiScores[10];
    for (int i = 0; i < 10; i++)
        hiScores[i] = 0;

    std::cout << sizeof(hiScores) << ", " << sizeof(hiScores[0]) << "\n";
    //std::cout << &(hiScores[1]) - &(hiScores[0]) << "\n";

    int md_hiScores[5][10];
    for (int game = 0; game < 5; game++) {
        for (int player = 0; player < 10; player++) {
            md_hiScores[game][player] = 0;
        }
    }

    int hd_hiScores[3][5][10];
    for (int system = 0; system < 3; system++) {
        for (int game = 0; game < 5; game++) {
            for (int player = 0; player < 10; player++) {
                hd_hiScores[system][game][player] = 0;
            }
        }
    }

    double coords[3];
    double coords_[3]{ 1, 2, 3 };
    double coords__[]{ 1, 2, 3 };

    int img[3][4];
    int img_[3][4]{ 1,2,3,4, 5,6,7,8, 9,10,11,12 };
    int img__[3][4]{ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

    int arr[]{ 1,2,3,4,5 };
    displayArray(arr);
    displayArray(arr, 5);
    displayArray_ptr(arr, 5);

}