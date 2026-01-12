// #include <stdio.h>

// int main() {
//     int n, i, j;
//     printf("Enter size of matrix: ");
//     scanf("%d", &n);

//     int a[n][n];

//     printf("Enter %d elements:\n", n*n);
//     for(i = 0; i < n; i++)
//         for(j = 0; j < n; j++)
//             scanf("%d", &a[i][j]);

//     printf("\nMatrix:\n");
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++)
//             printf("%d ", a[i][j]);
//         printf("\n");
//     }
// }


#include <stdio.h>

// int main() {
//     int n, i, j, sum = 0;

//     printf("Enter size of matrix (n x n): ");
//     scanf("%d", &n);

//     int a[n][n];

//     printf("Enter %d elements:\n", n * n);
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             sum += a[i][j];
//         }
//     }

//     printf("\nSum = %d\n", sum);

//     return 0;
// }


//  #include <stdio.h>

// int main() {
//     int n,sum=1;
//     printf("Enter size of matrix (n x n): ");
//     scanf("%d", &n);

//     // int a[n][n];
//     float avg;
//     avg = (float)sum / (n * n);
//     printf("Average = %.2f\n", avg);


//     return 0;
// }

#include <stdio.h>

// int main() {
//     int n, i, j;

//     printf("Enter size of matrix (n x n): ");
//     scanf("%d", &n);

//     int a[n][n];

//     printf("Enter %d elements:\n", n*n);
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("\nRow-wise sum:\n");
//     for(i = 0; i < n; i++) {
//         int rsum = 0;
//         for(j = 0; j < n; j++) {
//             rsum += a[i][j];
//         }
//         printf("Row %d = %d\n", i, rsum);
//     }

//     return 0;
// }

#include <stdio.h>

// int main() {
//     int n, i, j;

//     printf("Enter size of matrix (n x n): ");
//     scanf("%d", &n);

//     int a[n][n];

//     printf("Enter %d elements:\n", n * n);
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Row-wise sum
//     printf("\nRow-wise sum:\n");
//     for(i = 0; i < n; i++) {
//         int rsum = 0;
//         for(j = 0; j < n; j++) {
//             rsum += a[i][j];
//         }
//         printf("Row %d = %d\n", i, rsum);
//     }

//     // Column-wise sum
//     printf("\nColumn-wise sum:\n");
//     for(j = 0; j < n; j++) {
//         int csum = 0;
//         for(i = 0; i < n; i++) {
//             csum += a[i][j];
//         }
//         printf("Column %d = %d\n", j, csum);
//     }

//     return 0;
// }


#include <stdio.h>

// int main() {
//     int num, i = 1, count = 0;
//     printf("Enter number: ");
//     scanf("%d", &num);

//     while(num > 0) {
//         num -= i;
//         i += 2;
//         count++;
//     }

//     printf("Square root = %d\n", count);
//     return 0;
// }

#include <stdio.h>

// int main() {
//     int n, i, j;

//     printf("Enter size of matrix (n x n): ");
//     scanf("%d", &n);

//     int a[n][n];

//     printf("Enter %d elements:\n", n * n);
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Row-wise sum
//     printf("\nRow-wise sum:\n");
//     for(i = 0; i < n; i++) {
//         int rsum = 0;
//         for(j = 0; j < n; j++) {
//             rsum += a[i][j];
//         }
//         printf("Row %d = %d\n", i, rsum);
//     }

//     // Column-wise sum
//     printf("\nColumn-wise sum:\n");
//     for(j = 0; j < n; j++) {
//         int csum = 0;
//         for(i = 0; i < n; i++) {
//             csum += a[i][j];
//         }
//         printf("Column %d = %d\n", j, csum);
//     }

//     // Diagonal and Anti-diagonal sum
//     int dsum = 0, adsum = 0;
//     for(i = 0; i < n; i++) {
//         dsum += a[i][i];           // main diagonal
//         adsum += a[i][n - i - 1];  // anti diagonal
//     }

//     printf("\nDiagonal sum      = %d\n", dsum);
//     printf("Anti-diagonal sum = %d\n", adsum);

//     return 0;
// }
