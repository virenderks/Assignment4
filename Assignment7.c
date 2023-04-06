#include <stdio.h>

int main() {
    int i;

    printf("The first 10 even natural numbers in reverse order are:\n");

    for (i = 20; i >= 2; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}
