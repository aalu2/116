#include <iostream>
#include <vector>

void printDiagonal(const std::vector<std::vector<int>>& vals, int row, int col) {
    while (row < vals.size() && col < vals[0].size()) {
        std::cout << vals[row][col] << " ";
        row++;
        col++;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::vector<int>> values = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

    std::cout << "Diagonal values starting from (1, 0): ";
    printDiagonal(values, 1, 0);

    std::cout << "Diagonal values starting from (0, 0): ";
    printDiagonal(values, 0, 0);

    return 0;
}

      