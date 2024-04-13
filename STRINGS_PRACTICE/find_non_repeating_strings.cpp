#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//class solution{
//public:
void  nonrepeating(string&s , int freq[250]){
    int i , j;
    int l = s.length();
    for(int i =0; i <l;i++){
        freq[i]=1;
        for(int j =i+1;j<l;++j){
            if(s[i]==s[i]){
                freq[i]++;
                s[j]=' ';
            }
        }
    }
    for(int i =0;i<l;i++){
        if(freq[i]==1&&s[i]==' '&&s[i]!='-'){
            cout<<s[i]<<" ";
        }
    }
    }
//};
 int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    int l = s.length();
    int freq[200]={0};
     cout<<"the characters are";
    nonrepeating(s,freq);
    cout<<endl;

    return 0;

 }
