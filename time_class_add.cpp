#include <iostream>

using namespace std;

class time {
private:
    int hour;
    int min;
    int sec;

public:
    time() {
        hour = 0;
        min = 0;
        sec = 0;
    }

    time(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }

    void display() const {
        if (hour <= 9) {
            cout << "0" << hour;
        } else {
            cout << hour;
        }

        if (min <= 9) {
            cout << ":0" << min;
        } else {
            cout << ":" << min;
        }

        if (sec <= 9) {
            cout << ":0" << sec;
        } else {
            cout << ":" << sec;
        }
        cout << "\n";
    }

    void add(const time &t1, const time &t2) {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min + (sec / 60);
        sec = sec % 60;
        hour = t1.hour + t2.hour + (min / 60);
        min = min % 60;
    }
};

int main() {
    time t1(2, 45, 2);
    time t2(12, 36, 20);
    time t3;

    t3.add(t1, t2);

    t1.display();
    t2.display();
    t3.display();

    return 0;
}
