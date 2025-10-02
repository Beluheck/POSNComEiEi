#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, P, S, C;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int highest = 0;
    for (int i = 0; i < N; i++) {
        cin >> P >> S >> C;
        sum1 += P;
        sum2 += S;
        sum3 += C;
    }
    cout << "Peanut: " << sum1 << endl << "Pete: " << sum2 << endl << "Chertam: " << sum3 << endl;
    highest = sum1;
    if (sum2 >= highest) highest = sum2;
    if (sum3 >= highest) highest = sum3;
    
}