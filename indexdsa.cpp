#include <stdio.h>
int main() 
{
    int arr1D[4] = {10, 20, 30, 40};
    int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("1D array element at index 3: %d\n", arr1D[3]);
    printf("2D array element at row 1, col 2: %d\n", arr2D[1][2]);
    printf("1 D array\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n");
    printf("2 D array\n");
    int r = 0;
    while (r < 2) {
        int c = 0;
        while (c < 3) {
            printf("%d ", arr2D[r][c]);
            c++;
        }
        printf("\n");
        r++;
    }
    
    return 0;
}
