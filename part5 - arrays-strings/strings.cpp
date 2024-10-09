#include <iostream>
#include <string>

int count_numerals(char* str) {
    int count = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9')
            count++;
        str++;
    }
    return count;
}

int main() {
    char str_0[] = "C++";
    char str_1[4] = "C++";
    char str_2[] = { 'C','+','+','\0' };
    char str_3[4] = { 'C','+','+','\0' };
    char str_4[100] = "C++";
    const char* str_5 = "C++";


    char txt[100];
    std::cout << "type some text:";
    std::cin >> txt;
    int n = count_numerals(txt);
    std::cout << txt << "," << n << "\n";

    std::string str = "C++ is easy";
    std::string another_str("C++ is easy");

    std::cout << str << "\n";
    another_str = "C++ can handle strings";
    str = str + " and " + another_str;
    std::cout << str << "\n";

    if (str == another_str)
        std::cout << "strings are equal\n";
    else
        std::cout << "strings are not equal\n";
    const char* chr_ptr = str.c_str();
}