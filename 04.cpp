// 4. Inverted Pyramid (Stars)
// Input: n = 5

// *********
//  *******
//   *****
//    ***
//     *
// Description: Upside-down version of full pyramid (Q13). Hint: Spaces increase, stars decrease using 2*(n-row)+1. Difficulty: Medium


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int r = n; r >= 1; r--) {

        for (int s = 1; s <= n - r; s++) {
            cout << " "; 
        }

        for (int star = 1; star <= 2*r - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}