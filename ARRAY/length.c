#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Length of array
    int length = sizeof(a) / sizeof(a[0]);

    printf("\nNumber of elements (length) = %d\n", length);

    return 0;
}
