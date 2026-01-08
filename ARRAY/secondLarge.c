#include <stdio.h>

int main() {
    int n,i,largest,second;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    
    if(n<2){
        printf("second largest no poosible");
    }
    
    for(i=0;i<n;i++){
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
 
 
    if(a[0]>a[1]){
        largest=a[0];
        second=a[1];
    }else{
        largest=a[1];
        second=a[0];
    }
    
    for (i = 2; i < n; i++) {
    if (a[i] > largest) {
        second = largest;
        largest = a[i];
    } else if (a[i] > second && a[i] != largest) {
        second = a[i];
    }
    }
    
    if (largest == second) {
        printf("No second largest (all elements equal)\n");
    } else {
        printf("Second largest = %d\n", second);
    }
    
    return 0;
}
