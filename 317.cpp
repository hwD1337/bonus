#include <iostream>
using namespace std;


int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k; 

    
    int combinations = factorial(n) / (factorial(k) * factorial(n - k));

    cout << combinations << endl; 
    return 0;
}
