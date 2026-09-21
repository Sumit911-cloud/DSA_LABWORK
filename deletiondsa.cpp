#include <stdio.h>
#define MAX_SIZE 100 
int deleteElement(int arr[], int size, int position) 
{
    if (position < 0 || position >= size) {
        printf("Error: Invalid position. Valid range is 0 to %d.\n", size - 1);
        return 0; 
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; 
    return 1;  
}

int main() {
    int arr[MAX_SIZE];
    int size, position;
    printf("Enter number of elements %d: ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter position to delete : ");
    if (scanf("%d", &position) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (deleteElement(arr, size, position)) {
        printf("Array after deletion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

