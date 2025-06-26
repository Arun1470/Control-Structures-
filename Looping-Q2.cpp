#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    do {
        cin >> num;
        if (num != -1) {
            sum += num;
        }
    } while (num != -1);

    cout << sum;

    return 0;
}