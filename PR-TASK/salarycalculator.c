#include <stdio.h>

int main(){
    int salary;
    int HRA, DA, TA, grossSalary;

    printf("Enter your salary: ");
    scanf("%d", &salary);

    HRA = salary * 10 / 100;  // 10%
    DA  = salary * 5  / 100;  // 5%
    TA  = salary * 8  / 100;  // 8%

    grossSalary = salary + HRA + DA + TA;

    printf("%d", grossSalary);

    return 0;
}
