#include <bits/stdc++.h>
using namespace std;

int main() {
    string text; 
    getline(cin, text);
    int upcase = 0;
    int num = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i])) {
            upcase += 1;
        } else if (isdigit(text[i])) {
            num += 1;
        }
    }
    cout << upcase << endl << num;
}