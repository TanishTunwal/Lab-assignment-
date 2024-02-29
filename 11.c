#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }
    
    if (maxi < 0) {
        return 0;
    } else {
        return maxi;
    }
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Maximum subarray sum: %d\n", maxSubarraySum(arr, n));

    return 0;
}
