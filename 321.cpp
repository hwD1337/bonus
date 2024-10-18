#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int n;
    cin >> n; 

    double sum = 0.0; 

    
    for (int i = 0; i <= n; ++i) {
        sum += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1); 
    }

    sum *= 4; 

    cout << fixed << setprecision(5) << sum << endl; 
    return 0;
}
