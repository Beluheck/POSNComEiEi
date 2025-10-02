#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    int prime = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0 || i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0 || i % 23 == 0 || i % 29 == 0) {
                prime += i;
            }
        }
    }
    cout << prime;
}