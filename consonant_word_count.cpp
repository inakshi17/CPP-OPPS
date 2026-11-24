#include <iostream>
#include <string>
#include <stdexcept>
#include <cctype>

using namespace std;

class worddemo {
private:
    string str;
public:
    worddemo(string s) {
        str = s;
    }
    virtual ~worddemo() {}
    virtual void count() = 0;
    string getstring() {
        return str;
    }
};

class stringdemo : public worddemo {
public:
    stringdemo(string str) : worddemo(str) {}

    void count() {
        string str = getstring();
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (i == 0 || str[i - 1] == ' ') {
                char ch = str[i];
                if (ch != ' ' && isalpha(static_cast<unsigned char>(ch))) {
                    char lower = tolower(static_cast<unsigned char>(ch));
                    if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                        count++;
                    }
                }
            }
        }

        if (count > 5) {
            throw runtime_error("value exceed!!");
        }

        cout << "total count : " << count << "\n";
    }
};

int main() {
    string s;
    cout << "enter your string : ";
    getline(cin, s);

    try {
        stringdemo obj(s);
        obj.count();
    } catch (runtime_error &e) {
        cout << "exception : " << e.what() << "\n";
    }

    return 0;
}
