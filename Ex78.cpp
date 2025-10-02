#include <bits/stdc++.h>
using namespace std;

int main() {
    string dmy;
    getline(cin, dmy);

    if (dmy.length() == 10) {
        int date = stoi(dmy.substr(0, 2));
        int month = stoi(dmy.substr(3, 2));
        if (month > 12) cout << "Invalid month.";
        else {
            if (month == 1||month == 3||month == 5||month==7||month==8||month==10||month==12) {
                if (date > 31) cout << "Invalid day.";
                else {
                    
                }
            } else if (month==4||month==6||month==9||month==11) {
                if (date > 30) cout << "Invalid day.";
                else {

                }
            } else {
                if (date > 28) cout << "Invalid day.";
                else {

                }
            }
        }
    }
}
