#include<iostream>
#include<algorithm>
using namespace std;

int  isanagram(string&str1 , string&str2){
    int count=0;
    sort(str1.begin(),str1.begin());
    sort(str2.begin(),str2.end());
    for(int i =0; i <str1.size();i++){
        if(str1[i]==str2[i]){
            count++;
        }

    }
    return count;
}

int main(){
    string str1 ,str2;
    cout<<"enter the string 1";
    getline(cin,str1);
    cout<<"enter the string 2";
    getline(cin,str2);
    int result = isanagram(str1,str2);
    cout<<" the result is "<<" "<<result<<endl;

}