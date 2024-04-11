#include<iostream>
#include<string>
using namespace std;
string remove_space(string s){
    //string new;
    string new_s="";
    for(int i =0; i <s.size(); i++){
        if(s[i]!=' '){
            new_s+=s[i];
            //count++;
        }
    }
   // s[count]='\0';
    return new_s;
}

int main(){
    string s;
    cout<<"enter the string :"<<endl;
    getline(cin,s);
    int n = s.size();
     string result=remove_space(s);
cout<<"after removal"<<" "<<result<<endl;
    return 0;
}
