#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void printFibonacci(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series up to " << n << " terms: ";
   for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}
int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    if (terms <= 0)
        cout << "Please enter a positive number." << endl;
    else
        printFibonacci(terms);
    return 0;
}
