#include <stdio.h>

int main(){
    int total=180;
    int firstAngle, secondAngle, thirdAngle;
    printf("enter firstAngle:");
    scanf("%d",&firstAngle);
    
    printf("enter secondAngle:");
    scanf("%d",&secondAngle);
    
    thirdAngle=total-(firstAngle+secondAngle);
    printf("%d ",thirdAngle);

    return 0;
}
