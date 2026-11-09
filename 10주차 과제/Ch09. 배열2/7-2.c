#include <stdio.h>

int main() {
    int n[5][5];

    for (int i = 0; i < 5; i++) {
        n[i][0] = 1;
        n[0][i] = 1;
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            n[i][j] = n[i - 1][j] + n[i][j - 1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}