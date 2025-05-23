#include <iostream>
using namespace std;

class Add
{
public:
    int num1, num2;
//declRED the constructor & it is also a default constructor(no parameters)
    // Constructor to initialize values
    Add()
    {
        num1 = 5;
        num2 = 10;
    }

    // Member function to display calculations
    void showOutput()
    {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << static_cast<float>(num2) / num1 << endl;
        cout << "Remainder: " << num2 % num1 << endl;
    }
};

int main()
{
    Add c1;
    Add c2;

    // Correct way to assign values
    c2.num1 = 25;
    c2.num2 = 30;

    // Call member function correctly
    c1.showOutput();
    c2.showOutput();

    return 0;
}