// Write a C++ program to count all the vowels in a given string.
// Ans. Iterate through the string and increase count every time we find a vowel.

#include<iostream>
using namespace std;

int countVowels(string str) {
    int count = 0;
    
    // Iterate through the string and check each character
    for(int i = 0; i < str.length(); i++) {
        // Check if the character is a vowel (both uppercase and lowercase)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++; // Increment the count if it's a vowel
        }
    }
    return count;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input); // Use getline to allow spaces in the input
    
    int vowelCount = countVowels(input);
    
    cout << "Number of vowels in the given string: " << vowelCount << endl;
    
    return 0;
}
