#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "enter name : ";
    getline(cin, name);
    int u;
    cout << "enter the number of units : ";
    cin >> u;
    double s = 0;
    if (u <= 100) {
        s = 0.6 * u;
    }
    else if (u <= 300) {
        s = 0.6 * 100 + 0.8 * (u - 100);
    }
    else {
        s = 0.6 * 100 + 0.8 * 200 + 0.9 * (u - 300);
    }
    if (s < 50) {
        s = 50;
    }
    if (s > 300) {
        s = s + (s * 0.15);
    }
    cout << "\nDetails -" << endl;
    cout << "name : " << name << endl;
    cout << "unit : " << u << endl;
    cout << "total bill : RS " << s << endl;

    return 0;
}
