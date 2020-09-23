#include <iostream>
#include "stack_local.h"

int main() {
    StackL<int> s;
    std::cout << "empty?: " << s.is_empty() << "\n";
    s.push(4);
    s.push(16);
    std::cout << "size: " << s.size() << "\n";
    s.print();
    s.push(64);
    s.print();
    s.pop();
    s.print();
    std::cout << "TOP: "<< s.top() << "\n";
    s.push(256);
    std::cout << "size: " << s.size() << "\n";
    std::cout << "empty?: " << s.is_empty() << "\n";
    s.pop();
    s.pop();
    s.print();
    return 0;
}
