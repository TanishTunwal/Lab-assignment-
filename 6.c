#include <stdio.h>


int minPathSum(int grid[][COLS]) {
    int cumSum[ROWS][COLS];
    cumSum[0][0] = grid[0][0];

    for (int j = 1; j < COLS; j++) {
        cumSum[0][j] = cumSum[0][j - 1] + grid[0][j];
    }

    for (int i = 1; i < ROWS; i++) {
        cumSum[i][0] = cumSum[i - 1][0] + grid[i][0];
    }

    for (int i = 1; i < ROWS; i++) {
        for (int j = 1; j < COLS; j++) {
            cumSum[i][j] = min(cumSum[i - 1][j], cumSum[i][j - 1]) + grid[i][j];
        }
    }

    return cumSum[ROWS - 1][COLS - 1];
}
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int grid[ROWS][COLS] = {
        {1, 3, 1},
        {1, 5, 1},
        {4, 2, 1}
    };

    int minSum = minPathSum(grid);
    printf(minSum);

    return 0;
}
