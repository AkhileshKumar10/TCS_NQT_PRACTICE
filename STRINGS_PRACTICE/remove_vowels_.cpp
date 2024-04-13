#include<iostream>
using namespace std;

string remove_vowels(string str)
{
    for(int i =0; i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i])
        {
            str= str.substr(0,1)+str.substr(i+1);
            i--;
        }
    }
    return str;
    
}
int main()
{
    string str;
    cout<<" enter the string"<<endl;
    getline(cin,str);
    cout<<" string\n"<<remove_vowels(str)<<endl;
    return 0;
}

#include <iostream>
#include <string>  // Include for string manipulation functions
using namespace std;

string removeVowels(string str) {
    string result;  // Create an empty string to store the result

    for (char ch : str) {  // Iterate through each character in str
        if (tolower(ch) not_in('a', 'e', 'i', 'o', 'u')) {
            result += ch;  // Append the character if it's not a vowel
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string strWithoutVowels = removeVowels(str);
    cout << "String without vowels:\n" << strWithoutVowels << endl;

    return 0;
}
