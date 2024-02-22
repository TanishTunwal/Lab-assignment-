#include <stdio.h>

void hanoi(int n, char f, char t, char a) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", f, t);
        return;
    }
    hanoi(n - 1, f, a, t);
    printf("Move disk %d from rod %c to rod %c\n", n, f, t);
    hanoi(n - 1, a, t, f);
}

int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
