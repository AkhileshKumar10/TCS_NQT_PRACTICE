#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

bool f(int n ,string&s){

    if(n>s.size()/2)
    return true;
    if(s[n]!=s[s.size()-n-1])return false;

    return f(n+1,s);
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    // cout<<f(0,s);
    // cout<<endl;
     if (f(0, s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;

}