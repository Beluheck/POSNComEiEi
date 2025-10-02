#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    char number[N];
    char temp;
    for (int l = 0; l < N; l++) {
        cin >> number[l];
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
    for (int k = 0; k < N; k++) {
        cout << number[k] << " ";
    }
}