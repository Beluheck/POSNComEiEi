#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int score = 0;
    vector <int> nums;
    vector <string> letter;
    for (int i = 0; i < N; i++) {
        string x;
        int y;
        cin >> x >> y;
        nums.push_back(y);
        letter.push_back(x);
    }

    for (int j = 0; j < N; j++) {
        if (letter[j] == "C") {
            if (nums[j] == 1) score += 5;
            else score -= 2;
        } else if (letter[j] == "D") {
            if (nums[j] == 1) score += 10;
        }
    }

    for (int k = 0; k < N; k++) {
        if ((score >= 20 || nums[k] == 1) && letter[k] == "B") {
            score += 15;
        }
    }

    cout << score;

}