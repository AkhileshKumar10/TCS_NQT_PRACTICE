#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string remove_duplicates_from_string(string&str,int freq[250]){
    int l = str.length();
    string ans;
    //int maxfreq=2;
    for(int i =0; i <250;i++){
        freq[i]=0;
    }
    for(int i =0;i<l;i++){
        freq[str[i]]++;
        if(freq[str[i]]==1){
            ans+=str[i];
        }
    }
    return ans;
}

int main(){
    string str;
    cout<<"enter the string :"<<endl;
    getline(cin,str);
    int l = str.length();
    int freq[250];
    string result = remove_duplicates_from_string(str,freq);
    cout<<" the string after removing  duplicates"<<" "<<result<<endl;
    return 0;
}
