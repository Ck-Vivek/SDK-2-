#include <iostream>
using namespace std;

class Interest {
private:
    int principal, term;
    float ratePercent, simpleInterest, totalAmount;

public:
    // Constructor to initialize values
    Interest(int p, int t, float r) {
        principal = p;
        term = t;
        ratePercent = r;
        simpleInterest = 0;
        totalAmount = 0;
    }

    void calculate() {
        // Simple Interest formula: SI = (P * T * R) / 100
        simpleInterest = (principal * term * ratePercent) / 100;
        totalAmount = principal + simpleInterest;
    }

    void display() const {
        cout << "\nSimple Interest Calculation:\n";
        cout << "Principal Amount: " << principal << endl;
        cout << "No. of Years (Term): " << term << endl;
        cout << "Rate of Interest (in %): " << ratePercent << endl;
        cout << "Simple Interest Earned: " << simpleInterest << endl;
        cout << "Total Amount (Principal + Interest): " << totalAmount << endl;
    }
};

int main() {
    int p, t;
    float r;
    char choice;

    do {
        // Get user input
        cout << "Enter Principal Amount: ";
        cin >> p;
        cout << "Enter No. of Years (Term): ";
        cin >> t;
        cout << "Enter Rate of Interest (as percentage): ";
        cin >> r;

        // Create Interest object, calculate and display
        Interest obj(p, t, r);
        obj.calculate();
        obj.display();

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}