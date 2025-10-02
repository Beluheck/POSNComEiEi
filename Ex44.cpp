#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int arr[N] ={};
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int average = sum/N;
    int abovenum = 0;
    for (int i = 0; i < N; i++) {
        if (average > arr[i]) {
            abovenum += 1;
        }
    }
    cout << abovenum;
}