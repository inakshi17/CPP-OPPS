#include <iostream>
using namespace std;

class Area {
public:
    double area(double a) {
        return a * a;
    }
    double area(double l, double w) {
        return l * w;
    }
    double area(double b, double h, bool tri) {
        return 0.5 * b * h;
    }
};

int main() {
    Area obj;
    double s, l, w, b, h;

    cout << "enter the side of square : ";
    cin >> s;
    cout << "area of square : " << obj.area(s) << endl;

    cout << "enter length and width of rectangle : ";
    cin >> l >> w;
    cout << "area of rectangle : " << obj.area(l, w) << endl;

    cout << "enter base and height of triangle : ";
    cin >> b >> h;
    cout << "area of triangle : " << obj.area(b, h, true) << endl;

    return 0;
}
