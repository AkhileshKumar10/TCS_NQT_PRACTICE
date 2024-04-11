#include<iostream>
#include<string>
using namespace std;


string reverse_string(string s){
string new_reversed_string =" ";
for(int i =s.size()-1; i >=0;i--){
    new_reversed_string+=s[i];
}
return new_reversed_string;
}
int main(){
    string s;
    cout<<"enter the string "<<endl;
    getline(cin,s);
    string result=reverse_string(s);
    cout<<"the reversed string is "<<" "<<result<<endl;
}