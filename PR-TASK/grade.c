#include <stdio.h>

int main() {

    int percentage;
    printf("Enter your percentage: ");
    scanf("%d",&percentage);

    (percentage >= 90) ? printf("Grade A") :
    (percentage >= 80) ? printf("Grade B") :
    (percentage >= 70) ? printf("Grade C") :
    (percentage >= 60) ? printf("Grade D") :
    (percentage >= 50) ? printf("Grade E") :
                         printf("Grade F");

    return 0;
}
