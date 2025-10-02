#include <bits/stdc++.h>
using namespace std;

int main() {
    string email;
    getline(cin, email);
    size_t Ath = email.rfind('@');
    string afteracth = email.substr(Ath + 1);
    string beforeath = email.substr(0, Ath);
    if (Ath == string::npos) cout << "Invalid email format.";
    else cout << beforeath << endl << afteracth;
}