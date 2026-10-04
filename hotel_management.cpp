#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    int rno;
    string name;
    double tariff;
    int nod;

    double calc(){   
        double total = tariff * nod;
        if (total > 10000)
            return total * 1.05; 
        else
            return total;
    }

public:
    void checkin(int r, string n, double t, int d){
        rno = r;
        name = n;
        tariff = t;
        nod = d;
    }
    void checkout(){
        cout << "\nRoom Number : " << rno << endl;
        cout << "Name        : " << name << endl;
        cout << "Tariff      : " << tariff << endl;
        cout << "Days Stayed : " << nod << endl;
        cout << "Amount      : " << calc() << endl;
    }
};

int main(){
    int r, d;
    string n;
    double t;
    Hotel mem1;
    cout << "Enter Room Number : ";
    cin >> r;
    cin.ignore();
    cout << "Enter Name : ";
    getline(cin, n);
    cout << "Enter Tariff : ";
    cin >> t;
    cout << "Enter Number of Days : ";
    cin >> d;
    mem1.checkin(r, n, t, d);
    mem1.checkout();
    return 0;
}
