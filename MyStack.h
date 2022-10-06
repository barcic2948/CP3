#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>

template <class T> class MyStack {
    private:
        T* start;
        T* end;
        unsigned int size;
    public:
        MyStack(unsigned int r);
        ~MyStack();
        void push(T element);
        T pop();
        unsigned int getSize();
        unsigned int getHeaderPos();
};
#endif