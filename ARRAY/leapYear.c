#include <stdio.h>

int main() {
    int start, end, i, count = 0;

    printf("Enter start year: ");
    scanf("%d", &start);

    printf("Enter end year: ");
    scanf("%d", &end);

    int leap[end - start + 1];   // max needed space

    for(i = start; i <= end; i++) {
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            leap[count] = i;
            count++;
        }
    }

    printf("\nLeap years:\n");
    for(i = 0; i < count; i++) {
        printf("%d ", leap[i]);
    }

    return 0;
}
