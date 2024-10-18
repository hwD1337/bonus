#include <iostream>
using namespace std;

int main() {
    int startCol, startRow; 
    int endCol, endRow; 

    
    cin >> startCol >> startRow;
    cin >> endCol >> endRow;

    
    if (abs(startCol - endCol) <= 1 && abs(startRow - endRow) <= 1) {
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
