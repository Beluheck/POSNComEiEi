#include <iostream>
using namespace std;

// do-while
int main() {
    int num = 5;
    int sum = 0;
    do {
        sum += num;
        num -= 1;
    } while (num>0);
    cout << sum;
}