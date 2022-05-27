#include <iostream>

long long int limit = 1000000007;

long long int powi(long long int base, int exp) {
    long long int res = 1;

    for (; exp; exp >>= 1) {
        if (exp & 1) res = (res * base) % limit;
        base = (base * base % limit); 
    }

    /*
    while (exp) {
        if (exp & 1)
            res = (res * base) % limit;
        exp >>= 1;
        base = (base * base % limit);
    }
    */
    return res;
}

int main() {
    int n;

    std::cin >> n;
    std::cout << powi(2, n);

    return 0;
}