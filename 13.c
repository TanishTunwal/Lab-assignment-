#include <stdio.h>

int binary_search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int mid_val = arr[mid];

        if (mid_val == target) {
            return mid;
        } else if (mid_val < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int result = binary_search(arr, n, target);
    if (result != -1) {
        printf("Element %d is present at index %d.\n", target, result);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }
    return 0;
}
