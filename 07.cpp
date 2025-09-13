// 8. Centered Hollow Triangle (Stars)
// Input: n = 5

//     *
//    * *
//   *   *
//  *     *
// *********
// Description: Full pyramid outline (edges only). Hint: Stars at first and last column of each row; last row all stars. Difficulty: Medium


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int r = 1; r <= n; r++) {

        for (int s = 1; s <= n - r; s++) {
            cout << " "; 
        }

        for (int c = 1; c <= 2*r - 1; c++) {
            if (c == 1 || c == 2*r - 1 || r == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}