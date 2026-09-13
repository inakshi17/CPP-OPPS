#include <iostream>
#include <string>

using namespace std;

string removeword(string input, char rem) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != rem) {
            result = result + input[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "enter your input string : ";
    getline(cin, input);

    char rem;
    cout << "remove character : ";
    cin >> rem;

    string output = removeword(input, rem);

    cout << "INPUT : " << input << endl;
    cout << "OUTPUT : " << output << endl;

    return 0;
}
