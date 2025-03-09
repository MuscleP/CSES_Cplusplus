#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> a;
std::vector<int> b;


int main() {
    int n, m, k;
    int temp;
    int count = 0;
    std::cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < m; i++) {
        std::cin >> temp;
        b.push_back(temp);
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    while (!a.empty() && !b.empty()) {
        if (abs(a.back() - b.back()) <= k) {
            count++;
            a.pop_back();
            b.pop_back();
        }
        else if (a.back() > b.back()) a.pop_back();
        else b.pop_back();
    }
    std::cout << count << std::endl;
    return 0;
}