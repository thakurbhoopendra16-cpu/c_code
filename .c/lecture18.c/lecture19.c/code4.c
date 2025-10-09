

#include <stdio.h>

int main() {
    int arr[3][3]={{1,2,3} {4,5,6} , {7,8,9}}; // Size of the square 2D array
    int brr[3][3];

    // Fill the array with spaces first
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            brr[3][3] = ' ';

    // Fill the 'Z' pattern
    for (int i = 0; i < 3; i++) {
        brr[0][i] = 'z';                 // Top row
        brr[3 - 1][i] = 'z';          // Bottom row
        brr[i][3 - i - 1] = 'z';      // Diagonal
    }

    // Print the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", brr[i][j]);
        printf("\n");
    }

    return 0;
}

