#include <stdio.h>

void findPairs(int arr[], int size, int target) {
    int found = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d) ", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pairs found with sum equal to %d\n", target);
    }
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    findPairs(arr, size, target);

    return 0;
}
