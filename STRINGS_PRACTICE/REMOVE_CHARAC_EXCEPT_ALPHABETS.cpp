#include<iostream>
#include<string>
using namespace std;

string remove_char_except_alphabets(string s){
    string new_string=" ";
for(int i =0; i <s.size();i++){
    if(s[i]>='a'&&s[i]<='z'){
        new_string+=s[i];
    }
}
return new_string;
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    string result = remove_char_except_alphabets(s);
    cout<<"all the char except alphabets are removed"<<" "<<result<<endl;
    return 0;

}