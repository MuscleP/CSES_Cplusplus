#include <iostream>
#include <string>

bool visited[7][7] = {false};
std::string str;
int count = 0;

#define goDown  {if(!visited[row+1][column]&&(str[depth]=='?'||str[depth]=='D')){dfs(row+1, column, depth+1);}}
#define goRight {if(!visited[row][column+1]&&(str[depth]=='?'||str[depth]=='R')){dfs(row, column+1, depth+1);}}
#define goUp    {if(!visited[row-1][column]&&(str[depth]=='?'||str[depth]=='U')){dfs(row-1, column, depth+1);}}
#define goLeft  {if(!visited[row][column-1]&&(str[depth]=='?'||str[depth]=='L')){dfs(row, column-1, depth+1);}}
#define visitedUpDown    (visited[row+1][column]&visited[row-1][column])
#define visitedLeftRight (visited[row][column+1]&visited[row][column-1])


void dfs(int row, int column, int depth) {
    if (depth == 48) {
        if (row == 6 && column == 0) count += 1;
        return;
    }

    visited[row][column] = true;
    if (row == 0) {
        if (column == 0) { // (0,0)
            goRight;
            goDown;
        }
        else {
            if (visited[row][column-1]) { 
                if (column != 6) goRight;
                goDown; // (0,6)
            }
        } 
    }
    else if (row == 6) { 
        if (column == 0); // (6, 0) endpoint
        else if (column == 6) { // (6,6)
            if (visited[row-1][column]) {
                goLeft
            }
        }
        else {
            if (visited[row][column+1]) {
                goLeft
                goUp
            }
        } 
    }
    else if (column == 0) {
        if (visited[row-1][column]) {
            goRight
            goDown
        }
    }
    else if (column == 6) {
        if (visited[row-1][column]) {
            goLeft;
            goDown;
        }
    }
    else {
        if (visitedUpDown) {
            if (visited[row][column-1]) {goRight}
            else if (visited[row][column+1]) {goLeft}
        }
        else if (visitedLeftRight) {
            if (visited[row-1][column]) {goDown;}
            else if (visited[row+1][column]) {goUp;}
        } 
        else {
            goDown
            goUp
            goRight
            goLeft
        } 
    }
    visited[row][column] = false;
    return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cin >> str;
    dfs(0, 0, 0);
    std::cout << count << std::endl;
    return 0;
}