#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSquare of each element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }

    return 0;
}
