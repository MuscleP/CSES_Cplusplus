#include <iostream>
#include <climits>

int main() {
    long long int n;
    int element;
    long long int remaining;

    std::cin >> n;
    remaining = (n + 1) * n / 2;

    while (--n) {
        std::cin >> element;
        remaining -= element;
    }

    std::cout << remaining << std::endl;
    return 0;
}