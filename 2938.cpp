#include <iostream>

int main() {
    int N, K;
    
    
    std::cin >> N >> K;
    
    
    int apples_per_student = K / N;
    
    
    std::cout << apples_per_student << std::endl;

    return 0;
}
