#include <iostream>
#include <string>
#include <cmath>

int main() {
    int q;
    long long k;
    
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        std::cin >> k;
        k -= 1; // 0-based index

        long long length = 1, amounts = 9;
        while (k >= length * amounts) {
            k -= length * amounts;
            length += 1;
            amounts *= 10;
        }
        long long digit = std::pow(10, length - 1);
        //std::cout << "digit: " << digit << std::endl;
        digit += k / length;
        //std::cout << "digit: " << digit << std::endl;
        std::string str = std::to_string(digit);
        std::cout << str[k % length] << std::endl;
    }
    return 0;
}
        
    
