// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4 
// 5 

// #include <stdio.h>

// void main(){
//     int i,j;
    
//     for(i=1;i<=5;i++){
        
//         for(j=5;j>=i;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1 
// 1 

// #include <stdio.h>

// void main(){
//     int i,j;
    
//     for(i=5;i>=1;i--){
        
//         for(j=i;j>=1;j--){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2 
// 1

// #include <stdio.h>

// void main(){
//     int i,j;
    
//     for(i=5;i>=1;i--){
        
//         for(j=i;j>=1;j--){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }



// * * * * *
// * * * *
// * * * 
// * * 
// *

// #include <stdio.h>

// void main(){
//     int i,j;
    
//     for(i=5;i>=1;i--){
        
//         for(j=i;j>=1;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// *
// * *
// * * *
// * * * *
// * * * * *

// #include <stdio.h>

// void main(){
//     int i,j;
    
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include <stdio.h>

// int main() {
//     int i, j;

//     for (i = 1; i <= 5; i++) {
//         for (j = 1; j <= i; j++) {

//             if ((i + j) % 2 == 0) {
//                 printf("1 ");
//             } else {
//                 printf("0 ");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }


// 1 0 1 0 1
// 0 1 0 1
// 1 0 1 
//0 1 
// 1

// #include <stdio.h>

// int main() {
//     int i, j;

//     for (i = 5; i >= 1; i--) {
//         for (j = 1; j <= i; j++) {
//             if ((i + j) % 2 == 0) {
//                 printf("1 ");
//             } else {
//                 printf("0 ");
//             }

//         }
//         printf("\n");
//     }

//     return 0;
// }
