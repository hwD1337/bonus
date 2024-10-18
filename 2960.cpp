#include <iostream>
using namespace std;

int main() {
    int correctAnswer, studentAnswer;
    cin >> correctAnswer >> studentAnswer; 

    
    if ((correctAnswer == 1 && studentAnswer != 1) || 
        (correctAnswer != 1 && studentAnswer == 1)) {
        cout << "NO" << endl; 
    } else {
        cout << "YES" << endl; 
    }

    return 0;
}
