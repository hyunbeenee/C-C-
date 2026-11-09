#include <stdio.h>

int main() {
    int size;
    int n[10][10] = {0};

    scanf("%d", &size);

    n[0][0] = 1;

    for (int i = 1; i < size; i++) {
        n[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            n[i][j] = n[i - 1][j] + n[i - 1][j - 1];
        }
    }

    for (int i = size - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}