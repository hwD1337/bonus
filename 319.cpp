#include <iostream>
using namespace std;

int main() {
    double a;
    int n;
    cin >> a >> n; 

    double sum = 1.0; 
    double currentTerm = 1.0; 

   
    for (int i = 1; i <= n; ++i) {
        currentTerm *= a; 
        sum += currentTerm; 
    }

    cout << sum << endl; 
    return 0;
}
