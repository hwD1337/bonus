#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N; 

    set<int> uniqueNumbers; 

    
    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;
        uniqueNumbers.insert(number); 
    }

    
    cout << uniqueNumbers.size() << endl;

    return 0;
}
