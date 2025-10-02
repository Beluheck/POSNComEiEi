#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int even = 0;
    int odd = 0;
    int highest;
    int lowest;
    int positivenum = 0;
    vector <int> nums;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    highest = nums[0]; lowest = nums[0];

    for (int j = 0; j < N; j++) {
        if (nums[j] % 2 == 0) even += 1;
        else odd += 1;
        if (nums[j] > highest) highest = nums[j];
        if (nums[j] < lowest) lowest = nums[j];
    }

    cout << even << endl << odd << endl << highest << endl << lowest << endl;
    
    for (int k = 0; k < N; k++) {
        if (nums[k] > 0) {
            cout << nums[k] << " ";
            positivenum += 1;
        }    
    }

    if (positivenum == 0) cout << "NO POSITIVE";

}