#include <bits/stdc++.h>
using namespace std;

int main() {
    string number;
    getline(cin, number);
    size_t plus = number.rfind("+");
    size_t minus = number.rfind("-");
    size_t multiply = number.rfind("*");
    size_t divide = number.rfind("/");
    double front = stol(number.substr(0, plus));
    double back = stol(number.substr(plus + 1));
    if (plus != string::npos) cout << fixed << setprecision(2) << front+back;
    else if (minus != string::npos) cout << fixed << setprecision(2) << front-back;
    else if (multiply != string::npos) cout << fixed << setprecision(2) << front*back;
    else cout <<fixed << setprecision(2) << front/back;
}
