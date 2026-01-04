#include <stdio.h>

int main(){
    int cel;
    float fah;

    printf("Enter Celsius: ");
    scanf("%d", &cel);

    fah = (9.0/5.0 * cel) + 32;

    printf("Fahrenheit = %.2f", fah);

    return 0;
}
