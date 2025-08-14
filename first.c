// Pattern-21: Inverted pyramid
#include <stdio.h>
int main() {
    int i, j, space, rows = 5;
    for (i = 0; i < rows; i++) {
        // Print spaces
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < (2 * (rows - i) - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
