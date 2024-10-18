#include <iostream>
using namespace std;

int main() {
    int a, b, c; 
    cin >> a; 
    cin >> b; 
    cin >> c; 

    
    int maxNumber = a; 
    if (b > maxNumber) {
        maxNumber = b; 
    }
    if (c > maxNumber) {
        maxNumber = c; 
    }

    cout << maxNumber << endl; 

    return 0;
}
