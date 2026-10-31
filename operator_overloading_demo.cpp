#include <iostream>

using namespace std;

class demo {
    private:
    int rating;
    public :
    demo(int r){
        rating = r;
    }

    void display(){
        cout << "rating : " << rating << "\n";
    }

    friend bool operator > (const demo &m1, const demo &m2);
    friend bool operator ==(const demo &m1, const demo &m2);
};

bool operator > (const demo &m1, const demo &m2){
    return m1.rating > m2.rating;
}
bool operator == (const demo &m1, const demo &m2){
    return m1.rating == m2.rating;
}

int main() {
    demo obj1(4);
    demo obj2(5);

    cout << "Object 1: ";
    obj1.display();
    
    cout << "Object 2: ";
    obj2.display();

    if (obj2 > obj1) {
        cout << "obj2 has a higher rating than obj1\n";
    }

    if (obj1 == obj2) {
        cout << "Ratings are equal\n";
    } else {
        cout << "Ratings are not equal\n";
    }

    return 0;
}
