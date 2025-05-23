#include <iostream>
using namespace std;
class Customer{
    public:
    string firstName, lastName;
    int age, rating ;

    //initialized the constructor
    Customer (){
        firstName = "Mahendra";
        lastName = "Bahubali";
        age=10;
        rating=5;
    }

    void showDetails(){
        cout <<"Customer Name: "<<firstName<<" "<<lastName<<endl;
        cout <<"Customer Age: "<<age<<endl;
    }

    void givenRating(int rate); // Declared the member function
     void showRating(){
        cout<<"You have given "<<rating <<"star rating. Thank you!"<<endl;
     }
};
//scope resolution operator
void Customer::givenRating(int rate){ //Declared the member function
    rating = rate;
}

int main(){
    Customer cust1;  //Invoked the constructorbto assign default values

    cust1.showDetails();
    cust1.showRating();

    Customer cust2;
    cust2.firstName="Amarendra";
    cust2.lastName ="Bahubali";
    cust2.age=24;

    int starRating;

    cout<<"Give your rating(0 to 5): ";
    cin>> starRating;
    cust2.showDetails();
    cust2.givenRating(starRating);
    cust2.showRating();
}