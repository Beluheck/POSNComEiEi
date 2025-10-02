#include <iostream>
using namespace std;

int main() {
    int N, K; cin >> N;
    cin >> K;
    int arr[N] = {};
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > K) {
            sum += arr[i];
        }
    }
    cout << sum;
}