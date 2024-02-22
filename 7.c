#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxSubArraySum(int arr[], int size) {
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < size; i++) {
        curr = max(arr[i], curr + arr[i]);
        max1 = max(max1, curr);
    }

    return max1;
}

int main() {
    int n, max_sum;
    printf("Enter size of array and elements: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    sum = maxSubArraySum(a, n);
    printf("Max sum of contiguous subarray: %d\n", sum);

    return 0;
}
