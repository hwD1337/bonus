#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    
    int totalMinutesInDay = 24 * 60;

    
    int currentMinutes = n % totalMinutesInDay;

    
    int hours = currentMinutes / 60; 
    int minutes = currentMinutes % 60; 

    
    cout << hours << " " << minutes << endl;

    return 0;
}
