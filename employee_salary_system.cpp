#include <iostream>
#include <string>

using namespace std;

class employee {
private:
    int id;
    string name;
    double salary;
    static int totalemployee;

public:
    employee(int i, string n, double s) {
        id = i;
        name = n;
        salary = s;
        totalemployee++;
    }

    double calculateannualsalary() {
        double sal = 12 * salary;
        if (sal > 600000) {
            sal = sal + (sal * 0.1);
        }
        return sal;
    }

    void display() {
        cout << "name : " << name << "\n";
        cout << "id : " << id << "\n";
        cout << "annual salary : " << calculateannualsalary() << "\n";
    }

    static void displaytotalemployee() {
        cout << "total employee : " << totalemployee << "\n";
    }
};

int employee::totalemployee = 0;

int main() {
    employee e1(101, "ram", 45080);
    employee e2(102, "sita", 987832);

    e1.display();
    cout << "-----------------\n";
    e2.display();
    cout << "-----------------\n";

    employee::displaytotalemployee();

    return 0;
}
