#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) {
        if (text.rfind(" ") != 4294967295) {
            if (isupper(text[i])) cout << text[i];
        } else return 0;
    }
    cout << text.rfind(" ");
}