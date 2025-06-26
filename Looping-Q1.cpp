#include <iostream>
using namespace std;

int main() {
    int minVal, maxVal;
    cin >> minVal >> maxVal;

    int sum = 0;
    int i = minVal;
    while (i <= maxVal) {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}