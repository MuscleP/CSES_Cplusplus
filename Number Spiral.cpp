#include <iostream>

int main() {
    int t;
    long long int output_number;

    std::cin >> t;
    while(t--) {
        long long int row, column;

        std::cin >> row >> column;

        if (row > column) {
            output_number = (row % 2) 
                ? (row - 1) * (row - 1) + column
                : row * row + 1 - column;
        }
        else {
            output_number = (column % 2) 
                ? column * column + 1 - row
                : (column - 1) * (column - 1) + row;
        }

        std::cout << output_number << std::endl;
    }
}