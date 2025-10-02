#include <iostream>
using namespace std;

int main() {
    int N, x, num1; cin >> N;
    int minval, maxval;
    cin >> num1;
    minval = num1;
    maxval = num1;
    for (int i = 1; i < N; i++) {
        x; cin >> x;
        if (x < minval) {
            minval = x;
        } else if (x > maxval) {
            maxval = x;
        }
    }
    cout << maxval;
}