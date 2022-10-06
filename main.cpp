#include <iostream>
#include "MyStack.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    MyStack<int> temp(5);
    for(int i = 0; i < 5; i++) {
        temp.push(i);
        std::cout << temp.getHeaderPos() << std::endl;
        temp.pop();
        std::cout << temp.getHeaderPos() << std::endl;
    }
    std::cout << "=====\n";
    
}
