#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {7, 8, 1, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;

        printArray(arr, size);
    }

    return 0;
}
