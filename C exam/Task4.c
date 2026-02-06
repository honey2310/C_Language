#include<stdio.h>

void squareOfArr(int *ptr, int n){
    
    int i,square=2;
    
    for(i=0;i<n;i++){
        square = *ptr * *ptr;
        printf("%d ", square);
        ptr++;
    }
}

void main(){
    int arr[10]={1,2,3,4,5};
    squareOfArr(arr,5);
}