#include <stdio.h>
#include <math.h>

#define SIZE 20  // Size of the 2D array

int main() {
    char pattern[SIZE][SIZE];
    int cx = SIZE / 2;  // Center X
    int cy = SIZE / 2;  // Center Y
    int radius = SIZE / 3;

    // Generate the pattern
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            int dx = x - cx;
            int dy = y - cy;
            if (dx * dx + dy * dy <= radius * radius) {
                pattern[y][x] = '*';  // Inside the circle
            } else {
                pattern[y][x] = ' ';  // Outside the circle
            }
        }
    }
// Print the pattern
    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            printf("%c ", pattern[y][x]);
        }
        printf("\n");
    }

    return 0;
}
