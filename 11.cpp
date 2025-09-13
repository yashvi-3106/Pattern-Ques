// 13. Hollow Diamond (Stars)
// Input: n = 5

//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
// Description: Diamond outline only. Hint: Use hollow pyramid + inverted hollow pyramid. Difficulty: Medium

#include <iostream>
using namespace std;

int main() {
    int n = 5;


    for (int i = 0; i < n; i++) {
      
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
       
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--) {
      
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
    
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
