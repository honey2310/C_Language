
// 41 
// 41 42 
// 41 42 43 
// 41 42 43 44 
// 41 42 43 44 45 
// #include <stdio.h>

// int main() {

//     int i,j;
//     for(i=41;i<=45;i++){
//         for(j=41;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 11
// 12 13
// 14 15 16
// 17 18 19 20
// #include <stdio.h>

// int main() {
//     int i, j;
//     int num = 11;

//     for(i = 1; i <= 4; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }

//     return 0;
// }


//         5 
//       4 5 
//     3 4 5 
//   2 3 4 5 
// 1 2 3 4 5
// #include<stdio.h>

// int main(){
//     int i,j,k;
//     for(i=5;i>=1;i--){
        
//         for(k=1;k<i;k++){
//             printf("  ");
//         }
//         for(j=i;j<=5;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1

// #include<stdio.h>

// int main(){
//     int i,j,k,l;
    
//     for(i=1;i<=5;i++){
//     for(j=1;j<=i;j++){
//         printf("%d ",j);
//     }
//     for(k=i;k<5;k++){
//         printf("    ");
//     }
//     for(l=i;l>=1;l--){
//         printf("%d ",l);
//     }
//     printf("\n");
//     }
    
//     return 0;
// }

// * * * * * 
// *       * 
// *       * 
// * * * * * 
// *         
// *         
// *
// #include<stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//         for(j=1;j<=5;j++){
//             if(i==1||j==1 || i==2 && j==5|| i==3 && j==5|| i==4 && j==5|| i==4 && j==4|| i==4 && j==3|| i==4 && j==2){
//                 printf("* ");
//             }else{
//                 printf("  ");
//             }
            
//         }
//         printf("\n");
//     }
// }
