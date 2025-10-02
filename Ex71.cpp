#include <bits/stdc++.h>
using namespace std;

int main() {
    string filename;
    getline(cin, filename);
    size_t lastdot = filename.rfind('.');
    if (lastdot == string::npos) {
        cout << filename;
    }
    string extension = filename.substr(lastdot + 1);
    string name = filename.substr(0, lastdot);
    cout << name << endl << extension << endl;
}