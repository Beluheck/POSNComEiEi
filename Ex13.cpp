#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2; cin >> num1 >> num2;
    int maxnum, gcd;
    if (num1 > num2) {
        maxnum = num1;
    } else {
        maxnum = num2;
    }
    for (int i = 1; i <= maxnum; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    cout << gcd;
}