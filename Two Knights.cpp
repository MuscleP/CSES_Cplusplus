#include <iostream>

inline long long int increase (long long int i) {
    return 2*i*i*i + 3*i*i - 7*i + 8;
}

int main() {
    long long int n;
    long long int ways;
    long long int hardcode_ways[] = {0, 0, 6, 28, 96};

    std::cin >> n;

    for (long long int i = 1; i <= n; i++) {
        if (i >= 5) ways += increase(i - 1);
        else ways = hardcode_ways[i];
        std::cout << ways << std::endl;
    }
    
    return 0;
}