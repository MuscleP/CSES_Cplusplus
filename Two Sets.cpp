#include <iostream>

int main() {
    int n;

    std::cin >> n;

    if (n > 2) {
        if (n % 4 == 0) {
            std::cout << "YES" << std::endl;

            std::cout << n / 2 << std::endl;
            std::cout << "1 ";
            for (int i = 4; i <= n; i = i + 3) {
                std::cout << i << " ";
                if (++i <= n) std::cout << i << " ";
            }
            std::cout << std::endl;

            std::cout << n / 2 << std::endl;
            for (int i = 2; i <= n; i = i + 3) {
                std::cout << i << " ";
                if (++i <= n) std::cout << i << " ";
            }
            std::cout << std::endl;
        }
        else if ((n+1) % 4 == 0) {
            std::cout << "YES" << std::endl;

            std::cout << n / 2 + 1 << std::endl;
            for (int i = 1; i <= n; i = i + 3) {
                std::cout << i << " ";
                if (++i <= n) std::cout << i << " ";
            }
            std::cout << std::endl;

            std::cout << n / 2 << std::endl;
            for (int i = 3; i <= n; i = i + 3) {
                std::cout << i << " ";
                if (++i <= n) std::cout << i << " ";
            }
            std::cout << std::endl;
        }
        else std::cout << "NO" << std::endl;
    }
    else std::cout << "NO" << std::endl;

    return 0;
}