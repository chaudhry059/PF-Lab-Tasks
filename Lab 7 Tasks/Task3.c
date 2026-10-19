#include <stdio.h>

int main() {
    int n, i, j;
    int a[20][20];
    int top, bottom, left, right, num;

    printf("Enter n: ");
    scanf("%d", &n);

    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;
    num = 1;

    while (top <= bottom && left <= right) {
        for (j = left; j <= right; j++) {      
            a[top][j] = num;
            num++;
        }
        top++;

        for (i = top; i <= bottom; i++) {      
            a[i][right] = num;
            num++;
        }
        right--;

        for (j = right; j >= left && top <= bottom; j--) {   
            a[bottom][j] = num;
            num++;
        }
        bottom--;

        for (i = bottom; i >= top && left <= right; i--) {
            a[i][left] = num;
            num++;
        }
        left++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}