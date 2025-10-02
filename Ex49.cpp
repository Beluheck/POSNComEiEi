#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N] = {};
    int even = 0;
    int odd = 0;
    for (int i = 0; i < N; i++) {
       cin >> arr[i];
       if (i % 2 == 0) {
        even += arr[i];
       } else {
        odd += arr[i];
       }
    }
    if (even > odd) {
        cout << even;
    } else {
        cout << odd;
    }
}