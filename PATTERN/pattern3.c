// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 5; i++) {
//         for(j = 1; j <= i; j++) {
//             if(j % 2 != 0)
//                 printf("1 ");
//             else
//                 printf("0 ");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// 0
// 0 1
// 0 1 0
// 0 1 0 1
// 0 1 0 1 0

// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 5; i++) {
//         for(j = 1; j <= i; j++) {
//             if(j % 2 != 0)
//                 printf("0 ");
//             else
//                 printf("1 ");
//         }
//         printf("\n");
// }

//     return 0;
// }


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include <stdio.h>

// int main() {
//     int i, j;
//     int num = 1;

//     for(i = 1; i <= 5; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// - 
// | - 
// - | - 
// | - | - 
// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 4; i++) {
//         for(j = 1; j <= i; j++) {
//             if((i + j) % 2 == 0)
//                 printf("- ");
//             else
//                 printf("| ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 5; i++) {       // Rows
//         for(j = 0; j < i; j++) {    // Columns
//             printf("%c ", 'A' + j);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// #include <stdio.h>

// int main() {
//     int i, j;
//     char ch = 'A'; // starting letter

//     for(i = 1; i <= 5; i++) {      // Rows
//         for(j = 1; j <= i; j++) {  // Columns
//             printf("%c ", ch);
//             ch++; 
//         }
//         printf("\n");
//     }

//     return 0;
// }
