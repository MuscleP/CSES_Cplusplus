#include <iostream>

int n;
int p[20];
long long int sum = 0;
long long int min_diff = __LONG_LONG_MAX__;

inline void update_min_diff(long long int partial_sum) {
    long long int diff = std::abs((sum - partial_sum) - partial_sum);
    if (diff < min_diff) min_diff = diff;
}

void dfs(int index, long long int partial_sum) {
    if (index == n-1) { update_min_diff(partial_sum); }
    else {
        dfs(index+1, partial_sum + p[index]);
        dfs(index+1, partial_sum);
    }
}

int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> p[i];
        sum += p[i];
    }
    dfs(0, 0);
    std::cout << min_diff << std::endl;
    return 0;
}