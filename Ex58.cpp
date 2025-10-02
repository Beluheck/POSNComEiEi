#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int normal = 0;
    int problem = 0;
    vector <int> nums;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    for (int j = 0; j < N; j++) {
        if (nums[j] < 10 || nums[j] > 100) {
            problem += 1;
        } else {
            normal += nums[j];
        }
    }
    cout << problem << " " << normal << endl;
}