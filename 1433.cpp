#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m; 

    
    long long rabbits = (m + n - 1) / n;

    cout << rabbits << endl; 

    return 0;
}
