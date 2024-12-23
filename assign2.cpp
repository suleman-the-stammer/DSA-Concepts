
#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
    char *stackArray;
    int stackSize;
    int top;

public:
    Stack(int size) {
        stackArray = new char[size];
        stackSize = size;
        top = -1;
    }

    ~Stack() {
        delete[] stackArray;
    }

    void push(char value) {
        if (top == stackSize - 1) {
            cout << "Stack is full." << endl;
        }
        else {
            top++;
            stackArray[top] = value;
        }
    }

    char pop() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else {
            char value = stackArray[top];
            top--;
            return value;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    void reverse() {
        Stack auxStack(stackSize);

        while (!isEmpty()) {
            auxStack.push(pop());
        }

        while (!auxStack.isEmpty()) {
            push(auxStack.pop());
        }
    }
};

int main() {
    Stack myStack(5);

    myStack.push('Z');
    myStack.push('U');
    myStack.push('P');
    myStack.push('A');
    myStack.push('S');
    myStack.push('H');

    cout << "Original stack:" << endl;
    while (!myStack.isEmpty()) {
        cout << myStack.pop() << endl;
    }

    myStack.push('Z');
    myStack.push('U');
    myStack.push('P');
    myStack.push('A');
    myStack.push('S');
    myStack.push('H');

    myStack.reverse();

    cout << "Reversed stack:" << endl;
    while (!myStack.isEmpty()) {
        cout << myStack.pop() << endl;
    }

    return 0;
}















