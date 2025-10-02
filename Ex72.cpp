#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    string name;
    int count = 1;
    for (int i = 0; i < text.length(); i++) {
        int j = i + 1;
        char currentchar = text[i];
        if (currentchar == text[j]) {
            count++;
            j++;
        } else {
            cout << count << currentchar;
            count = 1;
        }
    }
}