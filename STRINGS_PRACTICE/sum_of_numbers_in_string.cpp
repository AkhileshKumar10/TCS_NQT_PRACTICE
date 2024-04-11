#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum_of_numbers(string s){
int sum=0;
string tempsum="";
for(int i =0; i <s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
        tempsum+=s[i];
    }
   else{
    sum+=atoi(tempsum.c_str());
    tempsum="";
   }
}
return sum+ atoi(tempsum.c_str());
};
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    int result = sum_of_numbers(s);
    cout<<" the sum is :"<<" "<<result<<endl;
    return 0;
}
// Yeh code strings mein se jo numbers milte hain unka sum nikal raha hai. Har baar jab koi non-numeric character milta hai, woh number jo pehle se store ho raha tha `tempsum` mein, usko integer mein convert karke `sum` mein add kar deta hai, aur `tempsum` ko phir se empty kar deta hai taki agla number store ho sake. Iska final result `sum` hota hai. Fir end mein `sum` ko return kar diya jata hai.

// Samajhne ke liye example dekhte hain:
// Agar input string `"abc123def456ghi"` hai, toh ye process kuch aise hoga:
// 1. `"abc"` non-numeric hai, toh koi action nahi liya jayega.
// 2. `"123"` numeric hai, toh yeh `tempsum` mein store ho jayega.
// 3. `"def"` non-numeric hai, toh `"123"` ko integer mein convert karke `sum` mein add kiya jayega, aur `tempsum` ko empty kar diya jayega.
// 4. `"456"` numeric hai, toh yeh phir se `tempsum` mein store ho jayega.
// 5. `"ghi"` non-numeric hai, toh `"456"` ko integer mein convert karke `sum` mein add kiya jayega.
// 6. Ab `sum` ka final value `123 + 456 = 579` hoga, jo output hoga.

// Mujhe umeed hai yeh explanation aapko samajh mein a gaya hoga. Agar kuch aur poochna hai toh pooch sakte hain!

// Bilkul, `atoi(tempsum.c_str())` ek C-string ko integer mein convert karne ke liye istemal hota hai.

// Yeh process do chizon ko karti hai:

// 1. `tempsum.c_str()`: `tempsum` ek C++ string hai, lekin `atoi` ek C-style string (yaani `const char*`) ka istemal karta hai. `.c_str()` function `tempsum` ko ek C-style string mein convert karta hai.

// 2. `atoi()`: Yeh ek C standard library function hai jo ek C-style string ko integer mein convert karta hai. Ismein input ke roop mein ek C-style string liya jata hai aur usme se numbers ko identify karke unhe integer mein convert kar deta hai. Agar koi non-numeric character milta hai, tab conversion ruk jata hai aur jo ab tak convert hua number return kar diya jata hai.

// Toh, `atoi(tempsum.c_str())` yeh expression `tempsum` string ko pehle ek C-style string mein convert karta hai (taki `atoi` use kar sake) aur phir us C-style string ko integer mein convert kar deta hai.

// Samajhne mein madadgar tha? Kuch aur poochna ho toh pooch sakte hain!