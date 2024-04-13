#include <bits/stdc++.h>
using namespace std;

char max_occuring_element(string &str1, int freq[200]) {
    int l = str1.length(); // Move this line after taking input
    int max_element = '\0';
    int max_freq = 0;

    for (int i = 0; i < l; i++) {
        freq[str1[i]]++; // Count frequency of each character
        if (freq[str1[i]] >= max_freq) { // Update if frequency is greater or equal
            max_freq = freq[str1[i]];
            max_element = str1[i];
        }
    }
    return max_element;
}

int main() {
    string str1;
    cout << "enter the string\n";
    getline(cin, str1);

    int freq[200] = {0}; // Initialize frequency array

    char result = max_occuring_element(str1, freq);
    cout << "the max element in the string is: " << result << endl;
    return 0;
}
