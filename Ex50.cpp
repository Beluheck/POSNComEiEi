#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N] = {};
    int days = 1;
    int highest = 1;
    bool locked = false;
    for (int i = 0; i < N; i++) {
       cin >> arr[i];
       if (arr[i] > arr[i-1]) {
            days += 1;
       } else if (days >= highest) {
           highest = days;
           days = 1;
       }
    }
    cout << highest;
}