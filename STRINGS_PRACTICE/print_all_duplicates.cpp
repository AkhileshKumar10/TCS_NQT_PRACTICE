#include <iostream>
#include <string>
#include <cstring> // Include the header file for memset
using namespace std;

string print(string &str, int freq[]) { // Changed the function parameter to take an array
    string ans;
    memset(freq, 0, sizeof(int) * 256); // Corrected memset usage
    int l = str.length();
    for (int i = 0; i < l; i++) {
        freq[str[i]]++;
        if (freq[str[i]] >= 2) {
            ans += str[i];
        }
    }
    return ans;
}

int main() {
    int freq[256] = {0};
    string str;
    cout << "Enter the string: " << endl;
    getline(cin, str);
    string result = print(str, freq);
    cout << "Printing all duplicates: " << result << endl;
    return 0; // Added a return statement for main function
}
