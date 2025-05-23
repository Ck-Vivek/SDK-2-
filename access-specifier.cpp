#include <iostream>
using namespace std;

class Bank
{
private:
    int balance = 0; // Balance initialized here (Private member: only accessible within the class)

public:
    string custoName, custoEmail;
    int acNumber; // Public members: accessible outside the class

    // Function to create account (Assigns user details to class variables)
    void createAccount(string cName, string cEmail)
    {
        custoName = cName;
        custoEmail = cEmail;
    }

    // Function to display customer information
    void displayInfo()
    {
        cout << "Customer Name: " << custoName << endl;
        cout << "Customer Email: " << custoEmail << endl;
    }

    // Function to add balance (Incorrect parameter: 'account' is unused)
    void addBalance(int account, int amount) 
    {
        balance += amount;
        cout << "The has been deposited successfully!" << endl; // Typo: "The" should be "Amount"
    }

    // Function to withdraw amount (Incorrect parameter: 'account' is unused)
    void withdrawAmount(int account, int amount)  //setter
    {
        balance -= amount;
        cout << "The has been deposited successfully!" << endl; // Typo: "The" should be "Amount"
    }

    // Function to check balance (Displays current balance)
    void checkBalance() //getter
    {
        cout << "Bank Balance: " << balance << endl;
    }
};

// Main function: Entry point of the program
int main()
{
    Bank custo1; // Object declared (Creating an instance of the Bank class)
    string name, email;
    int acNum, amount;

    custo1.custoName ="akashay";
    custo1.custoEmail = "akashay@gmail.com";
    custo1.acNumber = 1234567890;
    //custo1.balance = 8000 ; // Error: balance is a private member, cannot be accessed directly
    // User input: Collecting user information
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your Email id: ";
    cin >> email;

    cout << "Enter your Account Number: ";
    cin >> acNum; // Fix: Changed 'amount' to 'acNum' (Account number should not be stored in amount variable)

    cout << "Enter the amount you want to deposit: ";
    cin >> amount;

    // Creating account with user details
    custo1.createAccount(name, email);
    custo1.displayInfo();

    // Deposit money (Incorrect use of 'acNum' in function call)
    custo1.addBalance(acNum, amount); // Fix: 'acNum' is unnecessary, function only requires 'amount'
    custo1.checkBalance();

    cout << "Enter the amount to withdraw: ";
    cin >> amount;

    custo1.createAccount(name, email); // Redundant account creation (Remove this line)

    // Withdraw money (Incorrect use of 'acNum')
    custo1.withdrawAmount(acNum, amount); // Fix: 'acNum' is unnecessary, function only requires 'amount'
    custo1.checkBalance();

    return 0;
}