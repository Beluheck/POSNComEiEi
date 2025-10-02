#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1; cin >> num1;
    int numleft = 0;
    int reverse = 0;
    while (num1 > 0) {
        numleft = num1 % 10;
        reverse = (reverse * 10) + numleft;
        num1 /= 10;
    }
    cout << reverse;
}