#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int b[m];
    printf("Enter %d elements for second array:\n", m);
    for(i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    int o = n + m;
    int c[o];

    // Copy first array into c
    for(i = 0; i < n; i++) {
        c[i] = a[i];
    }

    // Copy second array after first
    for(j = 0; j < m; j++) {
        c[n + j] = b[j];
    }

    printf("\nMerged array:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
