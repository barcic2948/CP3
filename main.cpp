#include <iostream>
#include "MyStack.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    MyStack<int> temp(5);
    for(int i = 0; i < 4; i++) {
        temp.push(i);
    }

    temp.insert(4, 5);

    for(int i = 0; i < 5; i++) {
        std::cout << temp.pop() << std::endl;
    }
    std::cout << "=====\n";
    
}
