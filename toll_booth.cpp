#include <iostream>

using namespace std;

class tollbooth {
private:
    int numberofcar;
    double money;
public:
    tollbooth() {
        numberofcar = 0;
        money = 0.0;
    }
    void payingcar() {
        numberofcar++;
        money += 0.5;
    }
    void nonpaycar() {
        numberofcar++;
    }
    void display() {
        cout << "total car : " << numberofcar << "\n";
        cout << "total cash : " << money << "\n";
    }
};

int main() {
    tollbooth booth;
    char ch;
    cout << "enter 'p' for paying car" << "\n";
    cout << "enter 'n' for non paying car " << "\n";
    cout << "enter 'e' to display and exit  " << "\n";
    while(true) {
        cout << "enter your choice : ";
        cin >> ch;
        if(ch == 'e') {
            booth.display();
            break;
        }
        else if(ch == 'p') {
            booth.payingcar();
        }
        else if(ch == 'n') {
            booth.nonpaycar();
        }
        else {
            cout << "invalid choice! please try again.\n";
        }
    }
    return 0;
}
