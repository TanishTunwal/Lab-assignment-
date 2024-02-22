#include <stdio.h>

void p(int m[3][3], int x, int y, int p[], int pl) {
    if (x == 2 && y == 2) {
        p[pl] = m[x][y];
        printf("P found: ");
        for (int i = 0; i <= pl; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
        return;
    }

    p[pl] = m[x][y];
    if (x < 2) {
        p(m, x + 1, y, p, pl + 1);
    }
    if (y < 2) {
        p(m, x, y + 1, p, pl + 1);
    }
}

int main() {
    int maze[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int path[3 + 3 - 1];
    
    p(maze, 0, 0, path, 0);

    return 0;
}
