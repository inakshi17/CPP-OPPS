#include <iostream>
#include <string>

using namespace std;

class uniquestring {
private:
    string input;
    string output;
public:
    uniquestring(string inp) {
        input = inp;
        output = "";
    }

    void display() {
        cout << "string : " << output << "\n";
    }

    string newstring() {
        if (input.empty()) {
            return output;
        }
        char ch = input[0];
        output = output + ch;
        for (int i = 1; i < input.length(); i++) {
            if (input[i] != ch) {
                output = output + input[i];
                ch = input[i];
            }
        }
        return output;
    }
};

int main() {
    string input;
    cout << "enter your string : ";
    getline(cin, input);
    uniquestring s1(input);

    string output = s1.newstring();
    s1.display();

    return 0;
}
