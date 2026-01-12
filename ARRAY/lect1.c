// #include <stdio.h>

// int main() {
//     int n, i;
//     float sum = 0, avg;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n];

//     // Input elements
//     for(i = 0; i < n; i++) {
//         printf("Enter a[%d]: ", i);
//         scanf("%d", &a[i]);
//         sum += a[i];  // add to sum
//     }

//     // Calculate average
//     avg = sum / n;

//     printf("\nAverage of the array = %.2f\n", avg);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i;

//     // Input size
//     printf("Enter size of arrays: ");
//     scanf("%d", &n);

//     int a[n], b[n], c[n];

//     // Input first array
//     printf("\nEnter elements of first array:\n");
//     for(i = 0; i < n; i++) {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//     // Input second array
//     printf("\nEnter elements of second array:\n");
//     for(i = 0; i < n; i++) {
//         printf("b[%d] = ", i);
//         scanf("%d", &b[i]);
//     }

//     // Add arrays
//     for(i = 0; i < n; i++) {
//         c[i] = a[i] + b[i];
//     }

//     // Print result
//     printf("\nResultant array (a + b):\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", c[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n];

//     for(i = 0; i < n; i++) {
//         printf("Enter a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }

//     printf("\nArray elements: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i, sum = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n];
//     for(i = 0; i < n; i++) {
//         printf("Enter a[%d]: ", i);
//         scanf("%d", &a[i]);
//         sum += a[i];
//     }

//     printf("\nSum of array elements = %d\n", sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, i;
//     float sum = 0, avg;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n];
//     for(i = 0; i < n; i++) {
//         printf("Enter a[%d]: ", i);
//         scanf("%d", &a[i]);
//         sum += a[i];
//     }

//     avg = sum / n;
//     printf("\nAverage of array = %.2f\n", avg);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i, j;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n];
//     for(i = 0; i < n; i++) {
//         printf("Enter a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }

//     printf("\nMultiplication tables:\n");
//     for(i = 0; i < n; i++) {
//         printf("\nTable of %d:\n", a[i]);
//         for(j = 1; j <= 10; j++) {
//             printf("%d x %d = %d\n", a[i], j, a[i]*j);
//         }
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n, i;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int a[n], b[n];

//     printf("Enter elements of first array:\n");
//     for(i = 0; i < n; i++) {
//         printf("a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }

//     // Copy array
//     for(i = 0; i < n; i++) {
//         b[i] = a[i];
//     }

//     printf("\nElements of copied array:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", b[i]);
//     }

//     return 0;
// }

