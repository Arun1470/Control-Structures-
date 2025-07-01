#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total_days = 0;
    int chalks = n;
    int small_pieces = 0;
    int pieces_per_chalk = 6; 
    while (chalks > 0) {
        total_days += chalks;
        small_pieces += chalks;
        chalks = small_pieces / pieces_per_chalk;
        small_pieces = small_pieces % pieces_per_chalk;
    }

    cout << total_days << endl;
    return 0;
}