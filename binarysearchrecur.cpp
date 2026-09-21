#include <stdio.h>
int binarySearch(int arr[], int left, int right, int key) 
{
    if (left <= right) {
        int mid = left + (right - left) / 2; 
        if (arr[mid] == key) {
            return mid; 
        } else if (arr[mid] > key) {
            return binarySearch(arr, left, mid - 1, key); 
        } else {
            return binarySearch(arr, mid + 1, right, key); 
        }
    }
    return -1; 
}
int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    return 0;
}

