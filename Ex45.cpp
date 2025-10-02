#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N] ={};
    int maxval = 0;
    int posi = 0;
    int i;
    for (i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > maxval) {
            maxval = arr[i];
            posi = i;
        }
    }
    cout << posi;
}