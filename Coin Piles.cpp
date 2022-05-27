#include <iostream>
#include <utility>

int main() {
    int testcase;
    int a, b;

    std::cin >> testcase;
    while(testcase--) {
        std::cin >> a >> b;

        // Make sure a <= b
        if (a > b) std::swap(a, b);
        if ((a + b) % 3 == 0 && a * 2 >= b)
            std::cout << "YES\n";
        else 
            std::cout << "NO\n";
    }

    return 0;
}
    