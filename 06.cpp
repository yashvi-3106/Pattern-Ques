// 7. Hollow Square (Stars)
// Input: n = 5

// *****
// *   *
// *   *
// *   *
// *****
// Description: Print a square frame of stars. Inside remains empty. Hint: Print * if row = 1 or n, or column = 1 or n; otherwise print space. Difficulty: Medium (first condition check pattern).

#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1;i<=n ;i++){
        for(int j = 1;j<=n;j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}