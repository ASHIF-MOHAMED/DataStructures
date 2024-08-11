. #include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:

    Stack() {
        top = -1;
    }
    void push(int value) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = value;
        } else {
            cout << "Stack overflow! Cannot push element." <<endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack underflow! Cannot pop element." << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

bool compareStacks(Stack& s1, Stack& s2) {
    if (s1.isEmpty() && s2.isEmpty()) return true;

    if (s1.isEmpty() || s2.isEmpty()) return false;

    Stack temp1, temp2;

    while (!s1.isEmpty()) {

temp1.push(s1.peek());
        s1.pop();
    }

    while (!s2.isEmpty()) {
        temp2.push(s2.peek());
        s2.pop();
    }

    while (!temp1.isEmpty() && !temp2.isEmpty()) {
        if (temp1.peek() != temp2.peek()) return false;
        temp1.pop();
        temp2.pop();
    }

    return temp1.isEmpty() && temp2.isEmpty();
}

int main() {
    Stack s1;
    Stack s2;

    s1.push(7);
    s1.push(8);
    s1.push(9);
    s2.push(7);
    s2.push(8);
    s2.push(9);

      if (compareStacks(s1, s2)) {
        cout << "Stacks are identical." << endl;
    } else {
        cout << "Stacks are not identical." << endl;
    }

    return 0;
}
