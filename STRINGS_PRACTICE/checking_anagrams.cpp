#include<iostream>
#include<algorithm>
using namespace std;

bool isanagram(string&str1 , string&str2){
    sort(str1.begin(),str1.begin());
    sort(str2.begin(),str2.end());
    for(int i =0; i <str1.size();i++){
        if(str1[i]==str2[i]){
            return true;
        }

    }
    return false;
}

int main(){
    string str1 ,str2;
    cout<<"enter the string 1";
    getline(cin,str1);
    cout<<"enter the string 2";
    getline(cin,str2);
    bool result = isanagram(str1,str2);
    cout<<" the result is "<<" "<<result<<endl;

}