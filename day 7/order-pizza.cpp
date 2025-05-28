#include <iostream>
using namespace std;

class Pizza {
private:
    string secretIngredient;

public:
    string pizzaType, size;
    int price;
    bool isPaymentDone;

    void orderPizza() {
        cout << "Order the pizza by selecting your favorite pizza:" << endl;
    }

    void bookPizza() {
        cout << "Booking pizza!" << endl;
    }

    void bakePizza(string type, string pizzaSize) {
        pizzaType = type;
        size = pizzaSize;
        cout << "Pizza Type: " << pizzaType << endl;
    }

    void addIngredient(string secret) {
        secretIngredient = secret;
    }

    void confirmOrder() { // Fixed capitalization
        cout << "Order Confirmed!" << endl;
    }

    void checkPayment(int money, bool payment) { // Fixed method name
        price = money;
        isPaymentDone = payment;
        if (isPaymentDone) {
            cout << "Amount paid: Rs. " << price << ", Payment Successful!" << endl;
        } else {
            cout << "Amount Due: Rs. " << price << ", Pending!" << endl;
        }
    }

    void servePizza(int amount, bool paid, string typeOfPizza, string secretItem) { // Fixed spelling
        checkPayment(amount, paid); // Fixed method name
        confirmOrder(); // Fixed method name
        bookPizza();
        bakePizza(typeOfPizza, "Medium"); // Added missing size parameter
        addIngredient(secretItem);
        cout << "Pizza Served! Enjoy your Pizza!" << endl; // Fixed missing semicolon
    }
};

int main() {
    Pizza myPizza;
    myPizza.servePizza(500, true, "Pepperoni", "Extra Cheese");
    return 0;
}