#include <iostream>
#include <algorithm>

int main() {
    int n;
    int lower_bound = 0;
    long long int moves = 0;

    std::cin >> n;

    while (n--) {
        int element;
        
        std::cin >> element;

        if (element > lower_bound) lower_bound = element;
        else moves += lower_bound - element;
    }

    std::cout << moves << std::endl;

    return 0;
}