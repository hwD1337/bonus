#include <iostream>
using namespace std;

int main() {
    int bishopRow, bishopCol; 
    int pieceRow, pieceCol; 

    
    cin >> bishopRow >> bishopCol; 
    
    cin >> pieceRow >> pieceCol; 

    
    if (abs(bishopRow - pieceRow) == abs(bishopCol - pieceCol)) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
