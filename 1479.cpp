#include <iostream>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    
    int page_number = (n - 1) / k + 1;
    
    int line_number_on_page = (n - 1) % k + 1;

    cout << page_number << " " << line_number_on_page << endl;

    return 0;
}
