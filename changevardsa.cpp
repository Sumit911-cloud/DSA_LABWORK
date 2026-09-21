#include <stdio.h>
#include <stdlib.h>
#define SIZE 5  
int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50}; 
    int *ptr = arr;

    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }
    for (int i = 0; i < SIZE; i++) {
        *(ptr + i) += 5; 
    }

    printf("\nArray after modification via pointer:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int index, newValue;
    printf("\nEnter index (0-%d) to change: ", SIZE - 1);
    if (scanf("%d", &index) != 1 || index < 0 || index >= SIZE) {
        printf("Invalid index.\n");
        return 1;
    }

    printf("Enter new value: ");
    if (scanf("%d", &newValue) != 1) {
        printf("Invalid value.\n");
        return 1;
    }

    *(ptr + index) = newValue; 

    printf("\nArray after changing element at index %d:\n", index);
    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

