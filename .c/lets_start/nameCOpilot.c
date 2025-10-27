#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // V
        for (int j = 0; j < 2 * rows - 1; j++) {
            if (j == i || j == 2 * rows - 2 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // I
        for (int j = 0; j < rows; j++) {
            if (i == 0 || i == rows - 1 || j == rows / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // B
        for (int j = 0; j < rows; j++) {
            if (j == 0 || (i == 0 && j < rows - 1) || (i == rows / 2 && j < rows - 1) || (i == rows - 1 && j < rows - 1) || (j == rows - 1 && i != 0 && i != rows / 2 && i != rows - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // H
        for (int j = 0; j < rows; j++) {
            if (j == 0 || j == rows - 1 || i == rows / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A
        for (int j = 0; j < rows; j++) {
            if ((i == 0 && j != 0 && j != rows - 1) || i == rows / 2 || j == 0 || j == rows - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}