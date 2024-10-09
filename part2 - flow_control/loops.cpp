#include <iostream>

void the_while_loop() {
    // calculate the sum of 1->5 without a loop
    // this is a fixed calculation
    int sum = 1 + 2 + 3 + 4 + 5;

    // do the same with the while loop
    sum = 0;  // reset the sum
    int i = 1; // initialize the condition
    // while i < 6(not included) means from 1 to 5
    while (i < 6) {   // check the condition
        sum += i;
        i += 1;    // move to the next number
    }
}

int calc_sum(int start, int finish, int step) {
    int sum = 0;  // initialize the sum
    int i = start;    // initialize the condition
    // while i < finish(included) means from 1 to 5
    while (i <= finish) {   // check the condition
        sum += i;
        i += step;    // move to the next number
    }
    return sum;
}

void loop_forever() {
    while (1) {

    }

    for (;;) {

    }

    do {

    } while (1);
}

int calc_sum_with_for(int start, int finish, int step) {
    int sum = 0;  // initialize the sum

    for (int i = start; i <= finish; i += step) {
        sum += i;
    }
    return sum;
}

int calc_sum_with_do(int start, int finish, int step) {
    int sum = 0;  // initialize the sum

    int i = start;
    do {
        sum += i;
        i += step;
    } while (i <= finish);
    return sum;
}

void wait_for_input() {
    int value;  // just declare the variable
    do {
        std::cout << "input a number between 1 and 10:";
        std::cin >> value;
    } while (value < 1 || value >20);  // as long as we are out of bounds, repeat
    std::cout << "value:" << value << "\n";
}

int main() {
    the_while_loop();
    //the_for_loop();
    //the_do_loop();

    int s = calc_sum_with_do(3, 12, 4);
    std::cout << s << "\n";

    wait_for_input();
}