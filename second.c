#include <stdio.h>
int main() {
    int i, j, space, rows = 5;

    
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

   
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
