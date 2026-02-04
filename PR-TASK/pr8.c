// #include <stdio.h>

// int main() {
//     char str[100];
//     char *p;
//     int len = 0;

//     printf("Enter string: ");
//     scanf("%s", str);

//     p = str; 

//     while (*p) {
//         len++;
//         p++;
//     }

//     printf("Length of string = %d", len);

//     return 0;
// }


// #include <stdio.h>

// // User Defined Function
// void cube(int *p, int n) {
//     int i;
//     for (i = 0; i < n; i++) {
//         printf("Cube of %d = %d\n", *(p + i), (*(p + i)) * (*(p + i)) * (*(p + i)));
//     }
// }

// int main() {
//     int arr[10], n, i;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Function call
//     cube(arr, n);

//     return 0;
// }

