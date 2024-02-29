#include <stdio.h>

void dutchNationalFlag(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }
}

int main() {
    int arr[] = {2, 1, 0, 1, 2, 0, 1, 0, 2};
    int arr_size = 9;

    printf("Original array: ");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    

    dutchNationalFlag(arr, arr_size);

    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    return 0;
}
