#include<stdio.h>

void reverseDigit(int num){
    int rev=0,ld,temp;
    // printf("%d",num);
    
    temp=num;
    
    while(num!=0){ // 123
        ld = num % 10;
        rev = rev * 10 + ld;
        num = num / 10;
    }
    
    printf("%d",rev);
    
}

void main(){
    reverseDigit(234);
}