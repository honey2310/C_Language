// #include <stdio.h>

// int main() {
//     char str[20];
//     int i, j, flag = 1;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     // find length
//     for (j = 0; str[j] != '\0'; j++);
//     j = j - 1


//     for (i = 0; i < j; i++, j--) {
//         if (str[i] != str[j]) {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag == 1)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     char str[100];
//     int freq[256] = {0}; 
//     int i;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     for (i = 0; str[i] != '\0'; i++) {
//         freq[str[i]]++;
//     }

//     printf("Character Frequency:\n");
//     for (i = 0; i < 256; i++) {
//         if (freq[i] != 0) {
//             printf("%c = %d\n", i, freq[i]);
//         }
//     }

//     return 0;
// }

