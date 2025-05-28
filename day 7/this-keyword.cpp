#include <iostream>
using namespace std;

class Name{
    private:
     string name;
    public:
        void setName(string n){
          this-> name =n; // Using 'this' keyword to refer to the current object's member variable
        }
             // Using 'this' keyword to refer to the current object's member variable
     

     void showName(){
        cout<< "Your name is "<< name << endl; // Displaying the name
     }
};

int main(){
    string studentName;

    cout<<"Enter your name: ";
    cin>> studentName;

    Name name1;
    name1.setName(studentName);
    name1.showName(); // Calling the method to display the name
}