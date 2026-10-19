#include <stdio.h>

int main() {
    int n, i, j;
    int p[20][20];

    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                p[i][j] = 1;
            } else {
                p[i][j] = p[i-1][j-1] + p[i-1][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 1; j <= n - 1 - i; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}