#include <stdio.h>

int main() {
    int arr[2][2], i, j, sum = 0;

    printf("Enter 25 elements of the 5x5 array:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nBoundary elements are:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            // Check if element is on the boundary
            if(i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("  "); // spacing for nice shape
            }
        }
        printf("\n");
    }

    printf("\nSum of boundary elements = %d\n", sum);

    return 0;
}
