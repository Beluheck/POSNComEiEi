#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    stringstream ss(text);
    double numbers;
    double sum = 0.0;
    int count = 0;
    while (ss >> numbers) {
        sum += numbers;
        count++;
    }
    double average = 0.0;
    if (sum > 0) average = sum/count;
    cout << fixed << setprecision(1) << sum << endl;
    cout << count << endl;
    cout << fixed << setprecision(1) << average << endl;
}