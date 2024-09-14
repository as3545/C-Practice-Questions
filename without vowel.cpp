#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s; // Input the string

    string vowels; // Initialize an empty string to store the vowels

    // Iterate through each character in the string
    for(int i = 0; i < s.length(); i++) {
        // Check if the character is a vowel (both uppercase and lowercase)
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            vowels += s[i]; // Append the vowel to the result string
        }
    }

    // Output the resulting string containing only vowels
    cout << vowels << endl;

    return 0;
}
