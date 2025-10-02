#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    int arr[N][M] = {};
    int badges;
    for (int i = 0; i < N; i++) {
       for (int j = 0; j < M; j++) {
         cin >> arr[i][j];
       }
    }

    for (int k = 0; k < N; k++) {
        badges = 0;
        for (int l = 0; l < M; l++) {
            if (arr[k][l] == 1) {
                badges++;
            }
        }
        cout << badges << endl;
    }
}