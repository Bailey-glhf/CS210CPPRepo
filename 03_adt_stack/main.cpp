// TASK 03 -- Using the Stack ADT
//
// Read this file without ever opening Stack.cpp. You should still be
// able to tell exactly what this program does. That's the ADT promise
// in action: the header alone is enough documentation to use the type.

#include <iostream>
#include "Stack.h"

int main() {
    Stack s;

    std::cout << "Is empty? " << (s.isEmpty() ? "yes" : "no") << std::endl;         //checks if array isEmpty() after initializing should return yes

    s.push(10);                                                                //adds values to stack
    s.push(20);
    s.push(30);

    std::cout << "Stack size: " << s.size() << std::endl;                           //checks size and displays size of stack
    std::cout << "Top: " << s.peek() << std::endl;                                  //peak and displays top of stack

    s.pop();                                                                        //pop to remove top from stack
    std::cout << "After pop, top: " << s.peek() << std::endl;                       //peak and displays top of stack
    std::cout << "Is empty? " << (s.isEmpty() ? "yes" : "no") << std::endl;         //checks if array isEmpty hardcoded values should return no
    std::cout << "Is full? " << (s.isEmpty() ? "yes" : "no") << std::endl;          //checks if array isFull hardcoded values should return no

    return 0;
}   //end of main

// TRY IT LIVE: ask the class "what data structure is UNDER this stack?"
// Nobody can answer just from reading this file, and that's correct --
// it's not their business. Then open Stack.h to reveal it's a vector.
