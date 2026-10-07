#include <iostream>

using namespace std;

class student {
private:
    int score[5];

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> score[i];
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += score[i];
        }
        return total;
    }
};

int main() {
    int n;
    cout << "enter number of student : ";
    cin >> n;

    student *s = new student[n];

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    int annaScore = s[0].calculateTotalScore();
    int count = 0;

    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > annaScore) {
            count++;
        }
    }

    cout << "count : " << count << endl;

    delete[] s;
    return 0;
}
