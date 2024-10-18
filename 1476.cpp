#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d; 

    int h = d / 30; 
    int m = (d % 30) * 2; 

   
    cout << "It is " << h << " hours " << m << " minutes." << endl;

    return 0;
}
