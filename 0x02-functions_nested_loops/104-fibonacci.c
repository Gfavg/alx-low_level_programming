#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main() {
    int a = 1, b = 2, c;
    printf("%d, %d, ", a, b);

    for (int i = 3; i <= 98; i++) {
        c = a + b;
        printf("%d", c);
        if (i != 98) {
            printf(", ");
        }
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
