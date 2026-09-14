int wordcount(string input, char word){
    int c=0;
    for(int i=0; i< input.length(); i++){
        if(input[i]==word){
            c++;
        }
    }
    return c;
}
int main(){
    string input;
    cout<<"enter your input string : ";
    getline(cin, input);
    char word;
    string output="";
    for(int i=0; i< input.length(); i++){
        int c;
        if(input[i] != ' '){
            int c=wordcount(input, input[i]);
            if(c==1){
                output=output + input[i] + " ";
            }
        }
    }
    cout<<"INPUT : "<<input<< endl;
    cout<<"OUTPUT : "<<output<< endl;
    return 0;
}
