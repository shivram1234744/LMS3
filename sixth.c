// Pattern-27: X pattern
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            if (j == i || j == 10 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
