#include <iostream>
#include <bitset>
#include <bit>

int chessboard[8][8] = {0};

int dfs(int row, std::bitset<8> left, std::bitset<8> down, std::bitset<8> right) {
    if (row == 8) return 1;
    int ways = 0;
    for (int col = 0; col < 8; col++) {
        if (left[col] || down[col] || right[col] || chessboard[row][col]) continue;
        std::bitset<8> q;
        q.set(col);
        ways += dfs(row + 1, ((left | q) << 1), down | q, ((right | q) >> 1));
    }
    return ways;
}    
int main() {

    std::string s;
    for (int i = 0; i < 8; i++) {
        std::cin >> s;
        for (int j = 0; j < 8; j++) {
            if (s[j] == '*') {
                chessboard[i][j] = 1;
            }
        }
    }
    std::bitset<8> zero;
    std::cout << dfs(0, zero, zero, zero);
}