// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[] = "abac";
//     str[strlen(str) - 1] = '\0';  

//     int len = strlen(str);
//     int isPalin = 1;

//     for (int i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             isPalin = 0;
//             break;
//         }
//     }

//     if (isPalin)
//         printf("Yes, it's a palindrome.\n");
//     else
//         printf("No, it's not a palindrome.\n");

//     return 0;
// }/

// #include <stdio.h>
// #include<string.h>
// int main() {
//     char str[] = "abac";
//     int i = 0;
//     while (str[i + 1] != '\0') 
//     {
//         i++;
//     }
//     str[i] = '\0';  
//     int start = 0;
//     int end = i - 1; 
//     int isPalin = 1;

//     while (start < end) 
//     {
//         if (str[start] != str[end])
//         {
//             isPalin = 0;
//             break;
//         }
//         start++;
//         end--;
//     }

//     if (isPalin)
//         printf("Yes, it's a palindrome.\n");
//     else
//         printf("No, it's not a palindrome.\n");

   
// }

#include <stdio.h>

int main() {
    char str[] = "abac";

    // Manually remove last character
    str[3] = '\0';  // Now str becomes "aba"

    // Compare first and last characters
    if (str[0] == str[2]) {
        printf("Yes, it's a palindrome.\n");
    } else {
        printf("No, it's not a palindrome.\n");
    }

    return 0;
}