#include <iostream>
#include <string>
using namespace std;

bool isMatch(const string& text, const string& pattern, int tIndex, int pIndex) {
    // If both pointers are at the end of their respective strings, return true
    if (tIndex == text.length() && pIndex == pattern.length()) {
        return true;
    }
    
    // If only one pointer is at the end of its string while the other is not, return false
    if (tIndex == text.length() || pIndex == pattern.length()) {
        return false;
    }
    
    // If the characters at the current positions of both pointers match
    if (text[tIndex] == pattern[pIndex] || pattern[pIndex] == '?') {
        return isMatch(text, pattern, tIndex + 1, pIndex + 1);
    }
    
    // If the character in the pattern string is '*', there are two possibilities:
    if (pattern[pIndex] == '*') {
        // 1. Move the pointer in the pattern string to the next character and try matching
        // the remaining part of the pattern string with the remaining part of the text string.
        if (isMatch(text, pattern, tIndex, pIndex + 1)) {
            return true;
        }
        
        // 2. Move the pointer in the text string to the next character and try matching
        // the same character of the text string with the wildcard '*' in the pattern string.
        if (tIndex < text.length() && isMatch(text, pattern, tIndex + 1, pIndex)) {
            return true;
        }
    }
    
    // If none of the above conditions are met, return false.
    return false;
}

int main() {
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    
    if (isMatch(text, pattern, 0, 0)) {
        cout << "Pattern matches the text." << endl;
    } else {
        cout << "Pattern does not match the text." << endl;
    }
    
    return 0;
}
