#include <stdio.h>

int main() {

    char grade;
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);   // space before %c to ignore any leftover newline

    switch(grade) {
        case 'A':
        case 'a':
            printf("Excellent work!");
            break;
        case 'B':
        case 'b':
            printf("Very good!");
            break;
        case 'C':
        case 'c':
            printf("Good job!");
            break;
        case 'D':
        case 'd':
            printf("You passed, but you can improve.");
            break;
        case 'E':
        case 'e':
            printf("Work harder next time.");
            break;
        case 'F':
        case 'f':
            printf("Fail. Better luck next time!");
            break;
        default:
            printf("Invalid grade!");
    }

    return 0;
