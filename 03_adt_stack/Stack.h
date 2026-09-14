// TASK 03 -- An Abstract Data Type (ADT)
//
// An ADT is defined by WHAT operations it supports, not by HOW those
// operations are implemented. A stack is: push, pop, top, isEmpty, size.
// That's the whole contract. Whether it's backed by an array, a
// std::vector, or a linked list is an implementation detail the user of
// this class should never have to think about.
//
// This header is the ADT's public face: the operations, and nothing
// about how they're carried out.

#pragma once

//#include <vector> commented out due to Lab instruction

class Stack {
public:
    Stack();
    void push(int value);   // add to the top (does nothing if full)
    int pop();              // remove the top (does nothing if empty)
    int peek() const;       // look at the top without removing it (returns -1 if empty)
    bool isEmpty() const;   // checks if array topIndex == -1
    bool isFull() const;    // checks if array topIndex == 99
    int size() const;       // checks takes topIndex adds 1 and returns this value as size

private:
    // This is the REPRESENTATION. It's private on purpose: nothing
    // outside this class should touch data_ directly, or depend on it
    // being a vector specifically. If we swap this out for a linked
    // list next semester, every .cpp file that #includes this header
    // and only calls push/pop/top/isEmpty/size doesn't need to change
    // at all.
    int data[100];
    int topIndex;

    //std::vector<int> data_; commented out due to Lab instructing to use array instead of vector
};
