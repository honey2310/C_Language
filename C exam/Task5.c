#include<stdio.h>

void main(){
    // 
    int num=100;
    int gap=21;
    int i,j,k;
    
    for(i=1,k=100;i<=5,k>=36;i++,k-=gap){
        for(j=1;j<=i;j++){
            printf("%d ",k);
        }
        printf("\n");
        gap-=2;
    }
}