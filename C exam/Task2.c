#include <stdio.h>

int main() {
    
    int n, i,smallest;
    
    printf("Enter array length: ");
    scanf("%d", &n);
    
    int arr[n];  
    
    for (i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    // for (i = 0; i < n; i++) {
    //     printf("arr[%d] = %d\n", i, arr[i]);
    // }
    
    smallest=arr[0];
    
    for(i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    
    printf("Smallest amongst all is %d",smallest);
    return 0;
}