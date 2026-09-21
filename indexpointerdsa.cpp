#include <stdio.h>

int main() {
    int arr[10];  
    int n, i;

    printf("Enter number of elements : ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Invalid \n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    int *ptr = arr;
    if (n > 3) {
        printf("Element at index 3 is: %d\n", *(ptr + 3));
    } else {
        printf("Index 3 does not exist \n", n);
    }

    return 0;
}

