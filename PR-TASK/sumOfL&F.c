#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;        // last digit

    while (num >= 10) {
        num = num / 10;    // remove last digit
    }

    first = num;           // first digit

    printf("Sum = %d\n", first + last);

    return 0;
}
