#include <stdio.h>

int main() {

    char grade;
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade);  
    
    if(grade=='a'&& grade=='A'|| grade=='b'&& grade=='B'||grade=='c'&& grade=='C' || grade=='d'&& grade=='D'){
        printf("You are eligible for next level");
    }else{
        printf("Please try next time");
    }

    return 0;
}
