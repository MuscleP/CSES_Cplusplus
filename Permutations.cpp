#include <iostream>

inline void output(int pos, int n) {
    while(pos <= n) {
        std::cout << pos << " ";
        pos += 2;
    }
}

int main() {
    int n;

    std::cin >> n;

    if (n > 3) {
        int pos = 2;
        output(pos, n);
        pos = 1;
        output(pos, n);
    }
    else if (n > 1) std::cout << "NO SOLUTION";
    else std::cout << 1;
    
    std::cout << std::endl;

    return 0;
}