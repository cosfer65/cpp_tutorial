#include <iostream>
#include <stack>
#include <queue>

void stack_s() {
    std::stack<int> s;
    s.push(2);
    s.push(3);
    s.push(1);
    while (!s.empty()) {
        // retrieve last element
        std::cout << s.top() << "\n";
        // and remove it
        s.pop();
    }
}

void queue_s() {
    std::queue<int> s;
    s.push(2);
    s.push(3);
    s.push(1);
    while (!s.empty()) {
        // retrieve first element
        std::cout << s.front() << "\n";
        // and remove it
        s.pop();
    }
}

void priority_queue_s() {
    std::priority_queue<int> s;
    s.push(-1);
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(9);
    while (!s.empty()) {
        // retrieve first element
        std::cout << s.top() << "\n";
        // and remove it
        s.pop();
    }
}

int main() {
    //stack_s();
    //queue_s();
    priority_queue_s();
}
