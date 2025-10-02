#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int number[N] = {};
    int temp;
    int round = 0;
    for (int j = 0; j < N; j++) {
        cin >> number[j];
    }
    for (int i = N-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (number[j] > number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
                round += 1;
            }
        }
    }
    cout << round;
}