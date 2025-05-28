#include <iostream>
using namespace std;

class wish{
    private:
    string name;
    int age;
    public:
    wish(){  //default constructor
        name="Unknown";
        age=0;
    }

    wish(string n, int a);
    void birthdaywishes();
};
    
  wish ::wish (string n, int a){  //defining the rulesof  parameterized constructor outside the class using scope resolution operator
    name =n;
    age=a;
  }
    

    void wish :: birthdaywishes(){
        cout<<"Happy Birthday"<<name<<"!Now You're "<<age
        <<"  years old."<<endl;
    }



int main(){
    string personName;
    int personAge;


    wish person1; //object declared
    person1.birthdaywishes();

    cout<<"Enter your name: ";
    cin>>personName;
    cout<<"Enter your age: ";
    cin >>personAge;

    
}
