#include <stdio.h>

int main() {
    int n, i, j, size, d;

    printf("Enter n: ");
    scanf("%d", &n);

    size = 2 * n - 1;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            d = i;
            if (j < d) d = j;
            if (size - 1 - i < d) d = size - 1 - i;
            if (size - 1 - j < d) d = size - 1 - j;

            printf("%d ", n - d);
        }
        printf("\n");
    }

    return 0;
}