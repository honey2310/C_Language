#include <stdio.h>

int main() {
    int arr[10][10], rows, cols, i, j;
    int sum = 0;
    float avg;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the %d x %d array:\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    avg = (float)sum / (rows * cols);

    printf("\nAverage of all elements = %.2f\n", avg);

    return 0;
}
