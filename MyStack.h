#ifndef MYSTACK_H
#define MYSTACK_H

template <class T> class MyStack {
    private:
        T* start;
        T* end;
        unsigned int size;
    public:
        MyStack();
        MyStack(unsigned int r);
        ~MyStack();
        void push(T element);
        T pop();
};
#endif