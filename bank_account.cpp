#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string name;
    int accno;
    char tof;
    double amount;

public:
    void setaccount(string n, int an, char t, double a = 0.0) {
        name = n;
        accno = an;
        tof = t;
        amount = a;
    }

    void todeposite() {
        double dep;
        cout << "enter deposite ammount : ";
        cin >> dep;
        if (dep > 0) {
            amount += dep;
        } else {
            cout << "invalid amount !!!\n";
        }
    }

    void towithdraw() {
        double wd;
        cout << "enter withdraw ammount : ";
        cin >> wd;
        if (wd <= 0) {
            cout << "invalid ammount !!!\n";
        } else if (amount >= wd) {
            amount -= wd;
            cout << "amount withdraw successfully !!!\n";
        } else {
            cout << "required ammount not available !!!\n";
        }
    }

    void check() {
        cout << "\nName : " << name << endl;
        cout << "Balance : " << amount << endl;
    } 
};

int main() {
    string n;
    int an;
    char t;
    double a;

    cout << "enter name : ";
    getline(cin, n);
    cout << "enter account number : ";
    cin >> an;
    cout << "enter type of account (S/C) : ";
    cin >> t;
    cout << "Enter initial balance : ";
    cin >> a;

    Bank mem1;
    mem1.setaccount(n, an, t, a);
    mem1.check();
    mem1.todeposite();
    mem1.check();
    mem1.towithdraw();
    mem1.check();

    return 0;
}
