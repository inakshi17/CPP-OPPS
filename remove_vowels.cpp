#include <iostream>
#include <string>

using namespace std;

string remove(string input){
    string result = "";
    for(int i = 0; i < input.length(); i++){
        char ch = input[i];
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && 
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' ){
                result = result + ch;
        }
    }
    return result;
}

int main(){
    string input;
    cout << "enter your string : ";
    getline(cin, input);

    string output = remove(input);
    cout << "updated : " << output << "\n";

    return 0;
}
