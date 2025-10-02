#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int number[N] = {}, temp;
    bool odd = false;
    for (int j = 0; j < N; j++) {
        cin >> number[j];
    }
    for (int i = N-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (number[j] > number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    cout << "sort: ";
    for (int i = 0; i < N; i++) cout << number[i] << " ";
    if (N%2 == 0) odd = false;
    else odd = true;
    cout << endl << "median: ";
    if (odd == true) {
        int median = (N+1)/2;
        cout << fixed << setprecision(1) << number[median];
    } else {
        int frontnum = (N/2) - 1;
        int backnum = N/2;
        double result = (number[frontnum] + number[backnum]) / 2.0;
        cout << fixed << setprecision(1) << result;
    }
}