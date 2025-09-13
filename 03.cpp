// 3. Continuous Alphabet Triangle
// Input: n = 6

// A
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U
// Description: Like numbers but with alphabets. Hint: Maintain a character counter; wrap after ‘Z’ if needed. Difficulty: Medium


#include <iostream>
using namespace std;

int main(){
    int n = 6;
    char ch = 'A';
    for(int i = 0;i<n ;i++){
        for(int j = 0;j<=i;j++){
            cout << ch << " ";
            ch++;
            if(ch > 'Z') {
                ch = 'A'; 
            }
        }
        cout << endl;
    }
    return 0;
}