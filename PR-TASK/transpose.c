#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols], trans[cols][rows];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Create transpose
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            trans[j][i] = arr[i][j];
        }
    }

    printf("\nTranspose matrix:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
