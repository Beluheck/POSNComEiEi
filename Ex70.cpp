#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    cin >> text;
    int sum = 0;
    int multiply = 1;
    int frequency = 0;
    vector<int> numbers = {};
    for (int i = 0; i < text.length(); i++) {
        if (isdigit(text[i])) {
            numbers.push_back(text[i]);
            cout << numbers[i];
        }
    }
    for (int j : numbers) {
        sum += numbers[j];
        multiply *= numbers[j];
        
    }
    if (numbers.empty()) cout << "No digits found int the input.";
    else {
        cout << "Sum of digits: " << sum << endl;
        cout << "Product of digits; " << multiply << endl;
        cout << "Frequency of each digit:" << endl;
    }
}