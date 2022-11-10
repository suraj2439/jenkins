#include <stdio.h>
int main() {
    int n = 5, i;
    int  fact = 1;

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d \n", n, fact);
    }

    return 0;
}

