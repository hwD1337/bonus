#include <iostream>

using namespace std;

int main() {
    int h1, m1, s1; 
    int h2, m2, s2; 

   
    cin >> h1 >> m1 >> s1;
    
    cin >> h2 >> m2 >> s2;

    
    int total_seconds1 = h1 * 3600 + m1 * 60 + s1;
    int total_seconds2 = h2 * 3600 + m2 * 60 + s2;

    
    int seconds_difference = total_seconds2 - total_seconds1;

    
    cout << seconds_difference << endl;

    return 0;
}
