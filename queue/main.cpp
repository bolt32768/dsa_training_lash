#include <iostream>
#include "queue_local.h"

int main() {
    QueueL<int> s;
    std::cout << "empty?: " << s.is_empty() << "\n";
    s.enqueue(4);
    s.enqueue(16);
    std::cout << "size: " << s.size() << "\n";
    s.print();
    s.enqueue(64);
    s.print();
    s.dequeue();
    s.print();
    std::cout << "TOP: "<< s.front() << "\n";
    s.enqueue(256);
    std::cout << "size: " << s.size() << "\n";
    std::cout << "empty?: " << s.is_empty() << "\n";
    s.dequeue();
    s.dequeue();
    s.print();
    std::cout << "size: " << s.size() << "\n";
    return 0;
}
