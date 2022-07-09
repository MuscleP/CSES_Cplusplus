#include <iostream>

void hanoi(int from, int via, int to, unsigned int disks);

int main() {
    unsigned int n;

    std::cin >> n;

    // total moves = 2^n - 1
    std::cout << ((1 << n) - 1)<< std::endl; 
    
    hanoi(1, 2, 3, n);

    return 0;
}

void hanoi(int from, int via, int to, unsigned int disks) {
    if (disks) {
        hanoi(from, to, via, disks - 1);
        std::cout << from << " " << to << std::endl;
        hanoi(via, from, to, disks - 1);
    }
}