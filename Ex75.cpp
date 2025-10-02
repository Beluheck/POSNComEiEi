#include <bits/stdc++.h>
using namespace std;

int main() {
    string phonenum;
    getline (cin, phonenum);
    if (phonenum.length() == 10 && phonenum[0] == '0') {
        cout << "+66" << " (" << phonenum.substr(1,2) << ") " << phonenum.substr(3,3) << "-" << phonenum.substr(6,9);
    } else {
        cout << "Invalid Format";
    }
}