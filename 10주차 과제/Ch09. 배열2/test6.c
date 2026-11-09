#include <stdio.h>

int main() {
    int n[5][5] = {0};

    n[0][0] = 1;
    n[0][2] = 1;
    n[0][4] = 1;

    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int left = 0;
            int right = 0;

            if (j > 0) {
                left = n[i - 1][j - 1];
            }
            if (j < 4) {
                right = n[i - 1][j + 1];
            }

            n[i][j] = left + right;
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