#include <iostream>
using namespace std;

class Increment {
private:
    int number;

public:
    void setNumber(int num) {
        number = num;
    }

    // Operator overloading
    void operator++() {
        cout << "Before Incrementing: " << number << endl;
        number += 1; // Incrementing number directly
        cout << "After Incrementing: " << number << endl;
    }

    void operator--() {
        cout << "Before Decrementing: " << number << endl;
        number -= 1; // Decrementing number directly
        cout << "After Decrementing: " << number << endl;
    }
};

int main() {
    int n;

    cout << "Enter a number for incrementing & decrementing: ";
    cin >> n;

    Increment num1;
    num1.setNumber(n);

    ++num1; // Calls overloaded increment operator
    --num1; // Calls overloaded decrement operator

    return 0;
}     