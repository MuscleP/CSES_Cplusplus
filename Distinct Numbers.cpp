#include <iostream>
#include <set>
int number;
std::set<int> numbers;

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        numbers.insert(number);
    }
    std::cout << numbers.size() << std::endl;
    return 0;
}