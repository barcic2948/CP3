#include "MyStack.h"

template <class T> 
MyStack<T>::MyStack(unsigned int r) {
    MyStack::start = MyStack::end = new T[MyStack::size = r];
}
template <class T> 
MyStack<T>::~MyStack() {
    delete[] MyStack::start;
}

template <class T> 
void MyStack<T>::push(T element) {
    if (MyStack::end - MyStack::start  == MyStack::size) {
        std::cout << "Stack overflow\n";
    }
    else {
        *MyStack::end++ = element;
    }
}

template <class T> 
T MyStack<T>::pop() {
    if(MyStack::end - MyStack::start) {
        return *--MyStack::end;
    }
    else {
        std::cout << "Stack is empty\n";
    }
}

template <class T> 
unsigned int MyStack<T>::getSize() {
    return MyStack::size;
}

template <class T> 
unsigned int MyStack<T>::getHeaderPos() {
    return MyStack::end - MyStack::start;
}

template class MyStack<int>;
template class MyStack<float>;