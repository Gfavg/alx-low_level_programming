#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main() {
    int a = 1, b = 2, c = 0, sum = 2;
    while (c <= 4000000) {
        c = a + b;
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
    }
    printf("%d\n", sum);
    return 0;
}
