#include<bits/stdc++.h>
using namespace std;

int count_all( string str , int n){
int vowels=0 ,consonents=0 , whitespaces=0;
for(int i =0; i<n;i++){
    str[i]=tolower(str[i]);
}
for(int i =0; i <n; i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
vowels++;
}
else if(str[i]>='a'&& str[i]<='z'){
    consonents++;
}
else if (str[i]==' ') // double string use nahi krni 
{
whitespaces++;
}

}
cout<<"vowels  :"<<vowels<<"\n";
cout<<"whitespaces  :"<<whitespaces<<"\n";
cout<<"consonents   :"<<consonents<<"\n"; // loop se bhar ayega tabhi toh hoyega print 
return 0; // yeh return 0 dala kyunki sabhi varaiables ki value return hojaye

}

int main(){
    string str;
   
    cout<<" enter the string"<<endl;

    //cin>>str;
    getline(cin,str);
     int n = str.length(); // yeh niche ayega string input k
    count_all(str ,n);
    return 0;

}