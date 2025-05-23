#include <iostream>
using namespace std;

class Company{
    private:
    string cin ;
    int totalWorth=0;

    public:
         string gstNum, location;
         int numOfEmp;

         void setDetails(string cinNum , int worth){
            cin = cinNum;
            totalWorth = worth;
         }

         //getter method
         void getDetails(string gstNumber){
            cout<< "Corporate Identity Number: "<<cin<<endl;
            cout<<"Total Worth of the Company: "<<totalWorth<<endl;
         }

         void getBasicDetails();//declare the member function
};

//Function defination outside the class
//syntax: return type class_name:: member_function
void Company::getBasicDetails(){
    cout<<"GST Number: "<<gstNum<<endl;
    cout<<"Location: "<<location<<endl;
    cout<<"Number of Employees: "<<numOfEmp<<endl;
}
int main(){
    Company comp1; //object created
    comp1.gstNum="123456";
    comp1.location="Bengaluru";
    comp1.numOfEmp=50;
    comp1.getBasicDetails();

    string cinNumber;
    int CompanyWorth;

    cinNumber="9875647";
    CompanyWorth= 5000000;

    comp1.setDetails(cinNumber, CompanyWorth);
    comp1.getDetails(comp1.gstNum);
}
