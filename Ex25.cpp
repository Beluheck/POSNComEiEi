#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    int newnum = 0;
    for (int i = 1; i <= num ; i++) {
        newnum = i*i;
        cout << newnum << " ";
    }
}