#include <stdio.h>

int main() {
    int i;

    printf("The cubes of the first 10 natural numbers are:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }

    return 0;
}
