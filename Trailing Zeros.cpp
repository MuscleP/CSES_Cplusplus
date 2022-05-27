#include <iostream>

int main() {
    long long int n;
    long long int trailing_zeros = 0;
    
    std::cin >> n;

    for (long long int div = 5; div <= n; div *= 5)
        trailing_zeros += n / div;

    std::cout << trailing_zeros << std::endl;

    return 0;
}