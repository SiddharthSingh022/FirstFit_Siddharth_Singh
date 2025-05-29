//10. Count Vowels and Consonants in a String

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    ch = tolower(ch); 
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int vowels = 0, consonants = 0;
    for (char ch : str) {
        if (isalpha(ch)) { 
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        }
    }
    cout << "total vowels are: " << vowels << endl;
    cout << "total consonants are: " << consonants <<endl;
    // cout<<"Siddharth Singh 21BCE5222"<<endl;
    
    return 0;
}
