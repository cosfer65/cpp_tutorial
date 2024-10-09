#include <iostream>

void complex_if() {
    int menu_selection;

    // user menu option processing
    if (menu_selection == 1) {
        std::cout << "one\n";
        // execute respective code
    }
    else if (menu_selection == 2) {
        std::cout << "two\n";
        // execute respective code
    }
    else if (menu_selection == 3) {
        std::cout << "three\n";
        // execute respective code
    }
    else {
        std::cout << "selection out of bounds\n";
        // execute respective code
    }

}

int main() {
    int menu_selection;

    // user menu option processing
    switch (menu_selection) {
    case 1:
        std::cout << "one\n";
        // execute respective code
        break;
    case 2:
        std::cout << "two\n";
        // execute respective code
        break;
    case 3:
        std::cout << "three\n";
        // execute respective code
        break;
    default:
        std::cout << "selection out of bounds\n";
        // execute respective code
        break;
    }
}
