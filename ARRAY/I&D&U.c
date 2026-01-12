#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // INSERT
    printf("\n--- Insert ---\n");
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    // DELETE
    printf("\n--- Delete ---\n");
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    // UPDATE
    printf("\n--- Update ---\n");
    printf("Enter position to update (0 to %d): ", n - 1);
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &value);

    arr[pos] = value;

    // DISPLAY
    printf("\nFinal Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
