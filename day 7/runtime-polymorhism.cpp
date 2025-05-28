#include <iostream>
using namespace std;

class Base
{
public:
    void showBase()
    {
        cout << "Base member function called" << endl;
    }
};
class Derived : public Base
{
public:
    void showBase()
    { // Overriding Base class member function
        cout << "Derived member function called" << endl;
        Base::showBase(); // Calling Base class member function using scope resloution operator
    }
};

// exampple 2:

class Animal
{
public:
    void makeSound()
    {
        cout << "Animal makes some sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        Animal::makeSound(); // Calling base class member function
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Cat meows!" << endl;
    }
};

int main()
{

    // base b1
    // b1.showBase(); // Calls Base class member function

    Derived d1;
    d1.showBase(); // Calls Derived class member function

    Dog dog1;
    dog1.makeSound(); // Calls Dog class member function

    Cat cat1;
    cat1.makeSound(); // Calls Cat class member function
}