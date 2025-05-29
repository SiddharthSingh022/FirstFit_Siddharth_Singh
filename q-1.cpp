//q1 in cpp using stl libraries for reversing the string

#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverseString(string str) {
    reverse(str.begin(), str.end());
    cout << "Reversed string: "<<str<<endl;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    reverseString(input);
    return 0;
}
