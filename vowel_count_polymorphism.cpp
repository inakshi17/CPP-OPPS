#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <functional>

using namespace std;

class testdemo {
private:
    string str;
public:
    testdemo(string s) {
        str = s;
    }
    virtual ~testdemo() {}
    virtual void calculate() {
        cout << "string : " << str << "\n";
    }
    string get() {
        return str;
    }
};

class result : public testdemo {
public:
    result(string s) : testdemo(s) {}

    void calculate() override {
        string s = get();
        int count = 0;

        for (size_t i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
                ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U') {
                count++;
            }
        }

        if (count > 5) {
            throw runtime_error("length exceed !!");
        }

        cout << "total count : " << count << "\n";
        sort(s.begin(), s.end(), greater<char>());
        cout << "string : " << s << "\n";
    }
};

int main() {
    string s;
    cout << "enter your string : ";
    getline(cin, s);

    try {
        result obj(s);
        testdemo *ptr = &obj;
        ptr->calculate();
    } catch (runtime_error &e) {
        cout << "exception : " << e.what() << "\n";
    }

    return 0;
}
