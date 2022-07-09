#include <iostream>
#include <bitset>
#include <iomanip>

#define limit 16

inline int intpower(int base, int exp);

int main() {
    int n;    // the length of gray code
    unsigned int rows; // the number of total gray code

    std::cin >> n;
    rows = intpower(2, n);

    // use bitset to geneate binary output
    for (unsigned int i = 0; i < rows; i++) {
        std::bitset<limit> bs (i ^ (i >> 1));  // e.g. Gray Code for 0110 = 0110 ^ 0011

        for (int j = 0; j < n; j++) std::cout << bs[j];
        std::cout << std::endl;
    }

    return 0;
}

inline int intpower(int base, int exp) {
    int res = 1;

    while (exp) {
        if (exp % 2) res *= base;
        base *= base;
        exp >>= 1;    
    }

    return res;
}