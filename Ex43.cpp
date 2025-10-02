#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N] ={};
    int even = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even += 1;
        }
    }
    cout << even;
}