#include <stdio.h>

int main() {
    int arr[10][10], n, i;
    int sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the %d x %d array:\n", n, n);
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum of main diagonal
    for(i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}
