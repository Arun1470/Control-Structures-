#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int temp = num;
    int sum = 0;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (num % sum == 0) {
        cout << "Harshard Number" << endl;
    } else {
        cout << "Not Harshard Number" << endl;
    }
    return 0;
}