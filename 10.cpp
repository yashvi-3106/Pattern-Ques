// 12. Pyramid with Continuous Numbers
// Input: n = 4

//          1
//       2  3  4
//    5  6  7  8  9
// 10 11 12 13 14 15 16
// Description: Numbers keep increasing across pyramid rows. Hint: Counter variable continues row by row. Difficulty: Challenge


#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int num = 1; 

    for (int r = 1; r <= n; r++) {

        for (int s = 1; s <= n - r; s++) {
            cout << "   "; 
        }

        for (int c = 1; c <= r + (r - 1); c++) {
            cout << num << "  ";
            num++; 
        }

        cout << endl;
    }

    return 0;
}