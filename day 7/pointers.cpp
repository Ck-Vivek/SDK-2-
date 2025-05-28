#include <iostream>
using namespace std;

int main()
{
    int a;

    // Pointer declaration and initialization
    // data type *pointer_name = &variable_name;
    // datatype of the poinger must match the datatype of the variable it points to
    // assigning address of variable 'a' to pointer 'ptr'
    //* refers to the pointer variable
    //& refers to the address of the variable
    //*ptr refers to the value of the pointer
    int *ptr = &a;

    float decimal;
    float *decimalPtr = &decimal;

    cout << "Enter  the value of a: ";
    cin >> a;

    cout << "Enter the value of decimal: ";
    cin >> decimal;

    cout << "Value of a is: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of pointer(ptr): " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    cout << "Value of a decimal: " << decimal<< endl;
    cout << "Address of decimal: " << &decimal << endl;
    cout << "Value of pointer(decimalPtr): " << decimalPtr << endl;
    cout << "Address of decimalPtr: " << &decimalPtr << endl;
    cout << "Value pointed by decimalPtr: " << *decimalPtr << endl;
}