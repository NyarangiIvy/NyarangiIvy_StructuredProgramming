#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
};

class Guest : public Person {
private:
    double roomRate = 2000;
    int days;
    double totalBill;

public:
    Guest(string n, int d) : Person(n), days(d) {
        totalBill = d * roomRate;
    }

    void addLateFee(double fee) {
        totalBill += fee;
    }

    void showDetails() {
        cout << "Guest: " << name << " | Total Bill: KES " << totalBill << endl;
    }
};

class Manager : public Person {
public:
    Manager(string n) : Person(n) {}

    void processCheckout(Guest &g, int checkoutTime) {
        cout << "\n[Manager " << name << " is processing checkout]" << endl;


        if (checkoutTime > 1100) {
            cout << "Late Checkout a Fee will be deducted." << endl;
            g.addLateFee(500.0);
        }
        g.showDetails();
    }
};

int main() {

    Manager headManager("Mrs. Nyarangi");
    Guest currentGuest("Ivy", 7);

    int timeOfCheckOut;
    cout << "Enter Checkout Time in 24hr format: ";
    cin >> timeOfCheckOut;


    headManager.processCheckout(currentGuest, timeOfCheckOut);

    return 0;
}
