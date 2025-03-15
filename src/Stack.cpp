#include "main.h"
#include <iostream>

Stack::Stack()
{
    top = -1;
}

bool Stack::isFull() { 
    return top == MAX - 1; 
}

// Check if the stack is empty
bool Stack::isEmpty() { 
    return top == -1; 
}

void Stack::push(int value) {
    if (isFull()) {
        std::cout << "Stack Overflow\n";
        return;
    }
    arr[++top] = value;
}

void Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack Underflow\n";
        return;
    }
    top--;
}

// Peek at the top element
int Stack::peek() {
    if (isEmpty()) {
        std::cout << "Stack is Empty\n";
        return -1;
    }
    return arr[top];
}

// Display the stack elements
void Stack::display() {
    if (isEmpty()) {
        std::cout << "Stack is Empty\n";
        return;
    }
    std::cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

