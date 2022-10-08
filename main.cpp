#include <iostream>
#include "MyStack.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    MyStack<int> temp(5);
    for(int i = 0; i < 5; i++) {
        temp.push(i);
    }
    for(int i = 0; i < 7; i++) {
        temp.pop();
    }
    std::cout << "=====\n";
    
}
