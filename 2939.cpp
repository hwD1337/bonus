#include <iostream>

int main() {
    int N, K;
    
    
    std::cin >> N >> K;
    
    
    int apples_in_basket = K % N;
    
    
    std::cout << apples_in_basket << std::endl;

    return 0;
}
