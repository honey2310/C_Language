#include <stdio.h>

// void main() {
//     int a, b, max;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     max = (a > b) ? a : b;

//     printf("Maximum number is: %d\n", max);
// }


// #include <stdio.h>

// void main() {
//     int a, b, c;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a < b) {
//         if (a < c) {
//             printf("Minimum number is: %d\n", a);
//         } else {
//             printf("Minimum number is: %d\n", c);
//         }
//     } else {
//         if (b < c) {
//             printf("Minimum number is: %d\n", b);
//         } else {
//             printf("Minimum number is: %d\n", c);
//         }
//     }
// }

// #include <stdio.h>

// int main() {
//     int a, b, c, d;

//     printf("Enter four numbers: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     if (a > b) {
//         if (a > c) {
//             if (a > d) {
//                 printf("Maximum number is: %d\n", a);
//             } else {
//                 printf("Maximum number is: %d\n", d);
//             }
//         } else {
//             if (c > d) {
//                 printf("Maximum number is: %d\n", c);
//             } else {
//                 printf("Maximum number is: %d\n", d);
//             }
//         }
//     } else {
//         if (b > c) {
//             if (b > d) {
//                 printf("Maximum number is: %d\n", b);
//             } else {
//                 printf("Maximum number is: %d\n", d);
//             }
//         } else {
//             if (c > d) {
//                 printf("Maximum number is: %d\n", c);
//             } else {
//                 printf("Maximum number is: %d\n", d);
//             }
//         }
//     }
// }


// #include <stdio.h>

// int main() {
//     int a, b, c, d, e;

//     printf("Enter five numbers: ");
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

//     if (a > b) {
//         if (a > c) {
//             if (a > d) {
//                 if (a > e)
//                     printf("Maximum number is: %d\n", a);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             } else {
//                 if (d > e)
//                     printf("Maximum number is: %d\n", d);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             }
//         } else {
//             if (c > d) {
//                 if (c > e)
//                     printf("Maximum number is: %d\n", c);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             } else {
//                 if (d > e)
//                     printf("Maximum number is: %d\n", d);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             }
//         }
//     } else {
//         if (b > c) {
//             if (b > d) {
//                 if (b > e)
//                     printf("Maximum number is: %d\n", b);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             } else {
//                 if (d > e)
//                     printf("Maximum number is: %d\n", d);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             }
//         } else {
//             if (c > d) {
//                 if (c > e)
//                     printf("Maximum number is: %d\n", c);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             } else {
//                 if (d > e)
//                     printf("Maximum number is: %d\n", d);
//                 else
//                     printf("Maximum number is: %d\n", e);
//             }
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, c, max;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

//     printf("Maximum number is: %d\n", max);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, c, d, max;

//     printf("Enter four numbers: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     max = (a > b) ? 
//             ((a > c) ? 
//                 ((a > d) ? a : d) 
//                 : ((c > d) ? c : d))
//           : ((b > c) ? 
//                 ((b > d) ? b : d) 
//                 : ((c > d) ? c : d));

//     printf("Maximum number is: %d\n", max);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, c, d, e, max;

//     printf("Enter five numbers: ");
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

//     max = (a > b) ? 
//             ((a > c) ? 
//                 ((a > d) ? 
//                     ((a > e) ? a : e)
//                     : ((d > e) ? d : e))
//                 : ((c > d) ? 
//                     ((c > e) ? c : e)
//                     : ((d > e) ? d : e)))
//           : ((b > c) ? 
//                 ((b > d) ? 
//                     ((b > e) ? b : e)
//                     : ((d > e) ? d : e))
//                 : ((c > d) ? 
//                     ((c > e) ? c : e)
//                     : ((d > e) ? d : e)));

//     printf("Maximum number is: %d\n", max);

//     return 0;
// }

