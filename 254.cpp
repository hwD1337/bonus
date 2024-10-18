#include <iostream>
using namespace std;

int main() {
    int rookRow, rookCol; 
    int pieceRow, pieceCol; 

    
    cin >> rookRow >> rookCol; 
    
    cin >> pieceRow >> pieceCol; 

    
    if (rookRow == pieceRow || rookCol == pieceCol) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
