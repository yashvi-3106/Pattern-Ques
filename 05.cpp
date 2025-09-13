// 6. Diamond Pattern (Alphabets Palindrome)
// Input: n = 5

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
//  ABCDCBA
//   ABCBA
//    ABA
//     A
// Description: Combines palindrome pyramid (Q25) and its inverted version. Hint: Top half = palindrome pyramid, bottom half = inverted palindrome. Difficulty: Challenge

#include <iostream>
using namespace std;

int main() {
    int n = 5;


    for (int r = 1; r <= n; r++) {

      
        for (int s = 1; s <= n - r; s++) {
            cout << " "; 
        }
        for (char ch = 'A'; ch < 'A' + r; ch++) {
            cout << ch;
        }
        for (char ch = 'A' + r - 2; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    for (int r = n - 1; r >= 1; r--) {

        for (int s = 1; s <= n - r; s++) {
            cout << " "; 
        }

        for (char ch = 'A'; ch < 'A' + r; ch++) {
            cout << ch;
        }

        for (char ch = 'A' + r - 2; ch >= 'A'; ch--) {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}