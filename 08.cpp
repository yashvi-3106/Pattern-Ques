// 9. Simple X (Stars)
// Input: n = 5

// *   *
//  * *
//   *
//  * *
// *   *
// Description: X shape with stars along diagonals. Hint: Print star if row = col OR row + col = n + 1. Difficulty: Medium


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {

        for (int c = 1; c <= n; c++) {
            if (c == r || c == n - r + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}