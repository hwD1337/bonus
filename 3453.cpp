#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; 

    set<int> uniqueNumbers; 

   
    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command; 

        if (command == "ADD") {
            int num;
            cin >> num;
            uniqueNumbers.insert(num); 
        } else if (command == "PRESENT") {
            int num;
            cin >> num;
     
            if (uniqueNumbers.find(num) != uniqueNumbers.end()) {
                cout << "YES" << endl; 
            } else {
                cout << "NO" << endl; 
            }
        } else if (command == "COUNT") {
            cout << uniqueNumbers.size() << endl; 
        }
    }

    return 0;
}
