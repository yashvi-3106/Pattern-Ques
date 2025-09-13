// 11. Reverse Continuous Triangle (Numbers)
// Input: n = 5

// 15
// 14 13
// 12 11 10
// 9  8  7  6
// 5  4  3  2  1
// Description: Numbers decrease row by row. Hint: Start counter at n*(n+1)/2 and decrement each time. Difficulty: Medium

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int num = n*(n+1)/2; 

    for(int i = 0;i<n ;i++){
        for(int j = 0;j<=i;j++){
            cout << num << "  ";
            num--;        
        }
        cout << endl;
    }
    return 0;
}
