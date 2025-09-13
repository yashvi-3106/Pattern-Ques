// Continuous Number Triangle
// Input: n = 5

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// Description: Numbers don’t reset in each row; they keep increasing continuously. Hint: Use a counter variable that increments after each print. Difficulty: Medium


#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int num = 1;
    for(int i = 0;i<n ;i++){
        for(int j = 0;j<=i;j++){
            cout << num << " ";
            num++;        
        }
        cout << endl;
    }
    return 0;
}