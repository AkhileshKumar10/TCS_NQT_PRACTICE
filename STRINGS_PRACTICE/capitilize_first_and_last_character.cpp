#include<iostream>
#include<string>
 using namespace std;

 string capitalize(string str ){
    for(int i =0; i <str.size();i++){
        if(i==0||i==(str.size()-1))
        {
            str[i]=toupper(str[i]);
        } else if (str[i]==' '){
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    return str;
 };
 int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    string result = capitalize(str);

    cout<<"capitialize"<<result<<endl;
    return 0;
 }