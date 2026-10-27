#include <iostream>

using namespace std;

class distance {
    private:
    int feet;
    float inches;
    public:
    distance(int f=0, float i=0.0){
        feet=f;
        inches=i;
    }

    friend distance operator +(const distance& d1, const distance& d2);
    
    void display() const{
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

distance operator +(const distance& d1, const distance& d2){
    distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inches = d1.inches + d2.inches;
    if(temp.inches >= 12.0){
        int extrafeet = (int)(temp.inches / 12);
        temp.feet += extrafeet;
        temp.inches -= extrafeet * 12.0;
    }
    return temp;
}

int main() {
    int f1, f2;
    float i1, i2;

    cout << "Enter Distance 1 (feet and inches): ";
    cin >> f1 >> i1;

    cout << "Enter Distance 2 (feet and inches): ";
    cin >> f2 >> i2;

    distance d1(f1, i1);
    distance d2(f2, i2);
    distance d3 = d1 + d2;

    cout << "\nDistance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Sum (Normalized): ";
    d3.display();

    return 0;
}
