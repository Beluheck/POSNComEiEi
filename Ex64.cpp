#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int number[N] = {};
    int temp = 0;
    double sum = 0.00;
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
    cout << "sorting: ";
    for (int k = 0; k < N; k++) {
        cout << number[k] << " ";
        sum += number[k];
    }
    double avg = sum/N;
    cout << endl << "avg: " << fixed << setprecision(2) << avg;
}