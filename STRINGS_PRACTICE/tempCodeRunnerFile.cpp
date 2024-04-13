
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