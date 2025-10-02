#include <iostream>
using namespace std;

// while
int main() {
    int num = 5;
    int sum = 0;
    while (num > 0) {
        sum += num;
        num -= 1;
    }
    cout << sum;
}