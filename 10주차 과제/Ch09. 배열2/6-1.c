#include <stdio.h>

int main() {
    int n[4][4] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &n[i][j]);
            n[i][3] += n[i][j];
            n[3][j] += n[i][j];
            n[3][3] += n[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}