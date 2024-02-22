#include <stdio.h>

void generateCombinations(int set[], int combination[], int start, int end, int index, int size) {
    if (index == size) {

        for (int i = 0; i < size; i++) {
            printf("%d ", combination[i]);
        }
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= size - index; i++) {
        combination[index] = set[i];
        generateCombinations(set, combination, i + 1, end, index + 1, size);
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    int set[20];
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    int size;
    printf("Enter the size of combinations : ");
    scanf("%d", &size);

    if (size > n) {
        printf("Invalid input: Size cannot be greater than the number of elements.\n");
        return 0;
    }

    int combination[size];
    printf("All possible combinations of size %d:\n", size);
    generateCombinations(set, combination, 0, n - 1, 0, size);

    return 0;
}

