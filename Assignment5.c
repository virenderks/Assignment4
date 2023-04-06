#include <stdio.h>

int main() {
    int i;

    printf("The first 10 odd natural numbers in reverse order are:\n");

    for (i = 19; i >= 1; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}
