#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main() {
    int fib1 = 1, fib2 = 2, temp, count = 0;

    printf("%d, %d", fib1, fib2);

    while(count < 48) {
        temp = fib1 + fib2;
        printf(", %d", temp);
        fib1 = fib2;
        fib2 = temp;
        count++;
    }

    printf("\n");
    return 0;
}
