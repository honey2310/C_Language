// N
// #include <stdio.h>

// int main(){
//     int i,j;
//     for (i = 1; i <= 8; i++) {
//     for (j = 1; j <= 8; j++) {
//       if (j == 1) {
//           printf("* ");
//       } else if (j == 8) {
//           printf("* ");
//       } else if (j == 2 && i == 2 || j == 3 && i == 3 || j==4 && i==4 || j==5 && i==5 || j==6 && i==6 ) {
//          printf("* ");
//       } else {
//           printf("  ");
//       }
//     }
//      printf("\n");
//   }
//     return 0;
// }


// O
// #include <stdio.h>

// int main(){
//     int i,j;
 
// for (i = 1; i <= 8; i++) {
//   for (j = 1; j <= 8; j++) {
//     if (
//       (i == 1 && j == 2) ||
//       (i == 1 && j == 3) ||
//       (i == 1 && j == 4) ||
//       (i == 7 && j == 2) ||
//       (i == 7 && j == 3) ||
//       (i == 7 && j == 4)
//     ) {
//       printf("* ");
//     } else if (
//       (i == 2 && j == 1) ||
//       (i == 3 && j == 1) ||
//       (i == 4 && j == 1) ||
//       (i == 5 && j == 1) ||
//       (i == 5 && j == 1) ||
//       (i == 6 && j == 1) ||
//       (j == 5 && i == 2)
//     ) {
//       printf("* ");
//     } else if (
//       (i == 2 && j == 5) ||
//       (i == 3 && j == 5) ||
//       (i == 4 && j == 5) ||
//       (i == 5 && j == 5) ||
//       (i == 6 && j == 5)
//     ) {
//       printf("* ");
//     } else {
//       printf("  ");
//     }
//   }
//   printf("\n");
// }
//     return 0;
// }


//  P
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i = 1; i <= 8; i++){
//     for(j = 1; j <= 8; j++){
//         if((i == 1 && j == 2) ||
//         (i == 1 && j == 2) ||
//         (i == 1 && j == 3) ||
//         (i == 1 && j == 4) ||
//         (i == 1 && j == 5) ){
//              printf("* ");
//         }
//         else if((i == 4 && j == 2) ||
//         (i == 4 && j == 2) ||
//         (i == 4 && j == 3) ||
//         (i == 4 && j == 4) ||
//         (i == 4 && j == 5)){
//              printf("* ");
//         }
//         else if(j==1 || j==6 && i==2 || j==6 && i==3){
//              printf("* ");
//         }
//         else{
//              printf("  ");
//         }
//     }
//     printf("\n");
// }
//     return 0;
// }


// Q
// #include <stdio.h>

// int main(){
//     int i,j;
 
// for (i = 1; i <= 8; i++) {
//   for (j = 1; j <= 8; j++) {
//     if (
//       (i == 1 && j == 2) ||
//       (i == 1 && j == 3) ||
//       (i == 1 && j == 4) ||
//       (i == 7 && j == 2) ||
//       (i == 7 && j == 3) ||
//       (i == 7 && j == 4)
//     ) {
//       printf("* ");
//     } else if (
//       (i == 2 && j == 1) ||
//       (i == 3 && j == 1) ||
//       (i == 4 && j == 1) ||
//       (i == 5 && j == 1) ||
//       (i == 5 && j == 1) ||
//       (i == 6 && j == 1) ||
//       (j == 5 && i == 2)
//     ) {
//       printf("* ");
//     } else if (
//       (i == 2 && j == 5) ||
//       (i == 3 && j == 5) ||
//       (i == 4 && j == 5) ||
//       (i == 5 && j == 5) ||
//       (i == 6 && j == 5) ||
//       (i==5 && j==3) ||
//       (i==7 && j==6)
//     ) {
//       printf("* ");
//     } else {
//       printf("  ");
//     }
//   }
//   printf("\n");
// }
//     return 0;
// }
 
 
//  R
// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 8; i++) {
//         for(j = 1; j <= 8; j++) {

//             // Top line
//             if(i == 1 && j >= 2 && j <= 6)
//                 printf("* ");

//             // Middle line
//             else if(i == 4 && j >= 2 && j <= 6)
//                 printf("* ");

//             // Left side
//             else if(j == 1)
//                 printf("* ");

//             // Right side (upper loop)
//             else if(j == 6 && (i == 2 || i == 3))
//                 printf("* ");

//             // Diagonal leg downward
//             else if((i == 5 && j == 3) ||
//                     (i == 6 && j == 4) ||
//                     (i == 7 && j == 5) ||
//                     (i == 8 && j == 6))
//                 printf("* ");

//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// S
// #include <stdio.h>

// int main(){
//     int i,j;
//     for (i = 1; i <= 7; i++) {
//     for (j = 1; j <= 5; j++) {
//       if (i == 1) {
//           printf("* ");
//       } else if (i == 7 ) {
//           printf("* ");
//       } else if ((i==2&&j==1)||(i==3&&j==1)||(i==4&&j==1)||i==4||(i==5&&j==5)||(i==6&&j==5)) {
//          printf("* ");
//       } else {
//           printf("  ");
//       }
//     }
//      printf("\n");
//   }
//     return 0;
// }


// T
// #include <stdio.h>

// int main(){
//     int i,j;
//     for (i = 1; i <= 7; i++) {
//     for (j = 1; j <= 5; j++) {
//       if (i == 1 || j==3) {
//           printf("* ");
//       } else {
//           printf("  ");
//       }
//     }
//      printf("\n");
//   }
//     return 0;
// }


// U
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=5;j++){
//       if((i==7 && j==2)|| (i==7 && j==3)|| (i==2 && j==1) || (i==2 && j==5)|| (i==3 && j==1) || (i==3 && j==5)|| (i==4 && j==1) || (i==4 && j==5)|| (i==5 && j==1) || (i==5 && j==5)|| (i==6 && j==1) || (i==6 && j==5)){
//             printf("* ");
//       }else{
//           printf(" ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }


// V
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=7;i++){
//     for(j=1;j<=6;j++){
//       if((i==1&&j==1)||(i==2&&j==1)||(i==3&&j==1)||(i==4&&j==1)||(i==1&&j==6)||(i==2&&j==6)||(i==3&&j==6)||(i==4&&j==6)|| (i==5&& j==2)||(i==6&& j==4)||(i==5&& j==5)){
//             printf("* ");
//       }else{
//           printf(" ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }

// W
// #include <stdio.h>

// int main(){
//     int i,j;
// for ( i = 1; i <= 7; i++) {
//   for ( j = 1; j <= 5; j++) {
//     if (j == 1 || j==5 || i==6 && j==2 || i==6 && j==4 || i==5 && j==3) {
//       printf("* ");
//     } else {
//       printf("  ");
//     }
//   }
//   printf("\n");
// }
//     return 0;
// }

// X
// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 8; i++) {
//         for(j = 1; j <= 8; j++) {

//             // Main diagonal OR opposite diagonal
//             if(i == j || (i + j) == 9)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Y
// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=8;i++){
//     for(j=1;j<=6;j++){
//       if((i==1&&j==1)||(i==2&&j==1)||(i==3&&j==1)||(i==4&&j==1)||(i==1&&j==6)||(i==2&&j==6)||(i==3&&j==6)||(i==4&&j==6)|| (i==5&& j==2)||(i==6&& j==4)||(i==5&& j==5)||i==8 && j==4 || i==7 && j==4){
//             printf("* ");
//       }else{
//           printf(" ");
//       }
//     }
//     printf("\n");
// }
//     return 0;
// }

// Z pattern
// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 8; i++) {
//         for(j = 1; j <= 8; j++) {
//             if(i == 1 || i == 8 || (i + j) == 9)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
