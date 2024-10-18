#include <iostream>
using namespace std;

int main() {
    double a;
    int n;
    
    cin >> a >> n; 

    double result = 1.0; 

    
    for (int i = 0; i < n; ++i) {
        result *= a; 
    }

    cout << result << endl; 

    return 0;
}
