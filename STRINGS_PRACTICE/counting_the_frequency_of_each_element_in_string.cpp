#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

pair<char,int> print_frequency(string str){
    //jab bhi 2 cheze return krni toh unko pair m daldenge

    sort(str.begin(),str.end());
    char ch = str[0];
    int count =1;
    for(int i =1; i <str.length();i++){
        if(str[i]==ch)
        count++;
        else{
            cout<<ch<<count<<" ";
            count=1;
            ch=str[i];
        }
    }
return make_pair(ch,count);
}
int main(){
    string str;
    cout<<" enter the string    :"<<endl;
    getline(cin,str);
    pair<char, int> result=print_frequency(str);
    cout<<" the count of elements is :"<<result.first<<result.second<<endl;

    return 0;
}
