
// 2, 1, 1/2, 1/4
// #include <stdio.h>
// int main() {
//     float a = 2;
//     for(int i = 1; i <= 5; i++)
//   {    
//     printf("%.2f ", a);
//     a = a / 2;}
//     return 0;
// }

// 7, 10, 8, 11, 9, 12
// #include <stdio.h>
// int main() {
//     int a = 7;
    
//     for(int i = 1; i <= 7; i++) {
//          printf("%d ", a);
//         if(i % 2 != 0)
//             a = a + 3;
//         else
//             a = a - 2;
//     }
//     return 0;
// }

// 36, 34, 30, 28, 24
// #include <stdio.h>
// int main() {
//     int a = 36;
//     for(int i = 1; i <= 6; i++) {
//         printf("%d ", a);
//         if(i % 2 != 0)
//             a = a - 2;
//         else
//             a = a - 4;
//     }
//     return 0;
// }

// 22, 21, 23, 22, 24, 23
// #include <stdio.h>
// int main() {
//     int a = 22;
//     for(int i = 1; i <= 8; i++) {
//          printf("%d ", a);
//         if(i % 2 != 0)
//             a = a - 1;
//         else
//             a = a + 2;
//     }
//     return 0;
// }

// 53, 53, 40, 40, 27, 27
// #include <stdio.h>
// int main() {
//     int a = 53;
//     for(int i = 1; i <= 9; i++) {
//          printf("%d ", a);
//         if(i % 2 == 0)
//             a = a - 13;
//     }
//     return 0;
// }

// 21, 9, 21, 11, 21, 13, 21
// #include <stdio.h>
// int main() {
//     int a = 9;
//     int constant=21;
//     for(int i = 1; i <= 8; i++)
//       if(i%2==0){
//           printf(" %d ", a);
//             a = a + 2;
//       }else{
//           printf(" %d ", constant);
//       }
//     return 0;
// }


// 58, 52, 46, 40, 34
// #include <stdio.h>
// int main() {
//     int a = 58;
//     for(int i = 1; i <= 8; i++)
//         {
//             printf("%d ", a);
//             a = a - 6;
//         }
//     return 0;
// }

// 3, 4, 7, 8, 11, 12
// #include <stdio.h>
// int main() {
//     int a = 3;
//     for(int i = 1; i <= 8; i++) {
//         printf("%d ", a);
//         if(i % 2 != 0)
//             a = a + 1;
//         else
//             a = a + 3;
//     }
//     return 0;
// }

8, 22, 8, 28, 8
// #include <stdio.h>
// int main() {
//     int a = 22;
//     int constant=8;
//     for(int i = 1; i <= 8; i++)
//       {   
//           if(i%2==0){
//           printf("%d ", a);
//           a = a + 6;
//           }else{
//              printf("%d ", constant);  
//           }
//       }
//     return 0;
// }

// 31, 29, 24, 22, 17
// #include <stdio.h>
// int main() {
//     int a = 31;
//     for(int i = 1; i <= 8; i++) {
//         printf("%d ", a);
//         if(i % 2 != 0)
//             a = a - 2;
//         else
//             a = a - 5;
//     }
//     return 0;
// }

// Online C compiler to run C program online
// 1.5, 2.3, 3.1, 3.9,
// #include <stdio.h>

// int main() {
//     float a = 1.5;

//     printf("Series: ");
//     for(int i = 1; i <= 6; i++) {
//         printf("%.1f ", a);
//         a = a + 0.8;
//     }

//     return 0;
// }


// 14, 28, 20, 40, 32, 64,
// #include <stdio.h>

// int main() {
//     int a = 14;

//     printf("Series: ");
//     for(int i = 1; i <= 8; i++) {
//         printf("%d ", a);

//         if(i % 2 != 0)
//             a = a * 2;
//         else
//             a = a - 8;
//     }

//     return 0;
// }


//  2, 4, 6, 8, 10, 
// #include <stdio.h>

// int main() {
//     int a = 2;

//     printf("Series: ");
//     for(int i = 1; i <= 7; i++) {
//         printf("%d ", a);
//         a = a + 2;
//     }

//     return 0;
// }


// 201, 202, 204, 207, 
// #include <stdio.h>

// int main() {
//     int a = 201;
//     int diff = 1;

//     printf("Series: ");
//     for(int i = 1; i <= 6; i++) {
//         printf("%d ", a);
//         a = a + diff;
//         diff++;
//     }

//     return 0;
// }


// 544, 509, 474, 439, 
// #include <stdio.h>

// int main() {
//     int a = 544;

//     printf("Series: ");
//     for(int i = 1; i <= 6; i++) {
//         printf("%d ", a);
//         a = a - 35;
//     }

//     return 0;
// }


//  80, 10, 70, 15, 60, 
// #include <stdio.h>

// int main() {
//     int odd = 80;
//     int even = 10;

//     printf("Series: ");
//     for(int i = 1; i <= 4; i++) {
//         printf("%d ", odd);
//         printf("%d ", even);

//         odd = odd - 10;
//         even = even + 5;
//     }

//     return 0;
// }


// 2, 6, 18, 54, 
// #include <stdio.h>

// int main() {
//     int a = 2;

//     printf("Series: ");
//     for(int i = 1; i <= 6; i++) {
//         printf("%d ", a);
//         a = a * 3;
//     }

//     return 0;
// }


// 5.2, 4.8, 4.4, 4, 
// #include <stdio.h>

// int main() {
//     float a = 5.2;

//     printf("Series: ");
//     for(int i = 1; i <= 6; i++) {
//         printf("%.1f ", a);
//         a = a - 0.4;
//     }

//     return 0;
// }


// 8, 6, 9, 23, 87 ,
// #include <stdio.h>

// int main() {
//     int a = 8;

//     printf("Series: ");
//     for(int i = 1; i <= 6; i++) {
//         printf("%d ", a);
//         a = (a * i) - (i + 1);
//     }

//     return 0;
// }

