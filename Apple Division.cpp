#include <iostream>
#include <bitset>
#include <vector>

std::vector<int> p (20, 0);

int main()
{
    unsigned int n;
    std::cin >> n;

    for (unsigned int i = 0; i < n; i++) {
        std::bitset<8> b1{i};

        for (int i = 0; i < n; i++)
    }
    std::bitset<8> b1{u}; // binary literal for 42
        for (std::size_t i = 0; i < b1.size(); ++i) {
            std::cout << "b1[" << i << "]: " << b1[i] << '\n';
        }
    b1[0] = true; // modifies the first bit through bitset::reference
 
    std::cout << "After setting bit 0, b1 holds " << b1 << '\n';
}