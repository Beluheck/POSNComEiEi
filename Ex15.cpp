#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1; cin >> num1;
    while (num1 > 10) {
        num1 /= 10;
    }
    cout << num1;
}