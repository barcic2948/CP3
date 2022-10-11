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
    if (MyStack::getHeaderPos() != MyStack::size) {
        *MyStack::end++ = element;
    }
}

template <class T> 
T MyStack<T>::pop() {
    if(MyStack::getHeaderPos()) {
        return *--MyStack::end;
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

template <class T>
void MyStack<T>::setHeaderPos(unsigned int index) {
    MyStack::end = MyStack::start + index;
}

template <class T> 
void MyStack<T>::insert(int index, T element) {
    if (MyStack::getHeaderPos()  == MyStack::size) {}
    else if (index > MyStack::size - 1){}
    else {
        for(int i = MyStack<T>::getHeaderPos() - 1; i > index - 1; i--) {
            *(MyStack::start + i + 1) = *(MyStack::start + i);
        }
        *(MyStack<T>::start + index) = element;
        MyStack::end++;
    } 
}

template class MyStack<int>;
template class MyStack<float>;