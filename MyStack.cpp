#include "MyStack.h"

template <class T> 
MyStack<T>::MyStack(){
}

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
    *MyStack::end++ = element;
}

template <class T> 
T MyStack<T>::pop() {
    return *--MyStack::end;
}

template class MyStack<int>;