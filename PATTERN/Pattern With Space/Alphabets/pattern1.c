// Online C compiler to run C program online
// A
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(j==5 || i==4 ||j==1|| i==1){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }

// B
// #include <stdio.h>

// int main(){
//     int i,j;
//     for ( i = 1; i <= 7; i++) {
//   for ( j = 1; j <= 5; j++) {
//     if (j == 1) {
//      printf("* ");
//     } else if ((i == 1 && j == 2) || (i == 1 && j == 3)) {
//      printf("* ");
//     } else if ((i == 4 && j == 2) || (i == 4 && j == 3)) {
//      printf("* ");
//     } else if (i == 2 && j == 4) {
//       printf("* ");
//     } else if (i == 3 && j == 4) {
//     printf("* ");
//     } else if (i == 5 && j == 4) {
//     printf("* ");
//     } else if (i == 6 && j == 4) {
//   printf("* ");
//     }else if ((i == 7 && j == 2) || (i == 7 && j == 3)) {
//         printf("* ");
//      }else {
//       printf("  ");
//     }
//   }
//  printf("\n");
// }
//     return 0;
// }

// C
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(i==7 ||j==1|| i==1){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }

// D
// #include <stdio.h>

// int main(){
//     int i,j;
// for ( i = 1; i <= 7; i++) {
//   for ( j = 1; j <= 6; j++) {
//     if (j == 1) {
//         printf("* ");
//     } else if ((i == 1 && j == 3) || (i == 7 && j == 3)) {
//       printf("* ");
//     } else if ((i == 2 && j == 4) || (i == 6 && j == 4)) {
//       printf("* ");
//     }else if((i==3 && j==5 || i==5 && j==5 || i==4 && j==6)){
//         printf("* ");
//      } else {
//          printf("  ");
//     }
//   }
//   printf("\n");
// }
//     return 0;
// }

// E
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(i==7 ||j==1|| i==1|| i==4){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }

// F
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(j==1|| i==1|| i==4){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }


// G
// #include <stdio.h>
// int main(){
//     int i,j;
// for(i=1; i<=7; i++){
//     for(j=1; j<=6; j++){
//         if(i==1 && j==2 || i==1 && j==3 || i==1 && j==4 || i==7 && j==2 || i==7 && j==3 || i==7 && j==4){
//          printf("* ");
//         }else if(i==2 && j==1 || i==3 && j==1 || i==4 && j==1 || i==5 && j==1 || i==5 && j==1 || i==6 && j==1 || j==5 && i==2){
//          printf("* ");
//         }else if(i==4 && j==3 || i==4 && j==4 || i==4 && j==5 || i==5 && j==5 || i==6 && j==5){
//          printf("* ");
//         }else{
//          printf("  ");
//         }
//     }
//         printf("\n");
// }
//     return 0;
// }


// H 
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(j==5 || i==4 ||j==1){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }


// I
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(i==7 ||j==3|| i==1){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }


// J
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if((i==6 && j==1)||(i==7 && j==2)||j==3|| i==1){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }


// K
// #include <stdio.h>

// int main(){
//     int i,j;
//   for (i = 1; i <= 7; i++) {
//   for (j = 1; j <= 7; j++) {
//     if (j == 1) {
//         printf("* ");
//     } else if (
//       (i == 4 && j == 2) ||
//       (i == 3 && j == 3) ||
//       (i == 2 && j == 4) ||
//       (i == 1 && j == 5)
//     ) {
//         printf("* ");
//     } else if (
//       (i == 5 && j == 3) ||
//       (i == 6 && j == 4) ||
//       (i == 7 && j == 5)
//     ) {
//         printf("* ");
//     } else {
//       printf("  ");
//     }
//   }
//   printf("\n");
// }
//     return 0;
// }


// L
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if(i==7 || j==1){
//             printf("* ");
//       }else{
//           printf("  ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }
 

// M
// #include <stdio.h>

// int main(){
//     int i,j;
//   for (i = 1; i <= 7; i++) {
//   for (j = 1; j <= 7; j++) {
//     if (j == 1) {
//       printf("* ");
//     } else if (j == 5) {
//         printf("* ");
//     } else if (j == 2 && i == 2 || j == 4 && i == 2 || j==3 && i==3) {
//         printf("* ");
//     } else {
//       printf("  ");
//     }
//   }
//  printf("\n");
// }
//     return 0;
// }
