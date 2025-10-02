#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int sum = 0;
    vector <int> nums;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    for (int j = 0; j < N; j++) {
        sum += nums[j];
    }

    cout << sum;
}