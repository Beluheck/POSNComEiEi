#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    int sum = 1;
    for (int i = 0; i < num; i++) {
        sum *= (num - i);
    }
    cout << sum;
}