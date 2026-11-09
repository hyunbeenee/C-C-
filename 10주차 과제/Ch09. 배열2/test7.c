#include <stdio.h>

int main() {
    int n[4][2];
    int total = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &n[i][j]);
            total += n[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++) {
            sum += n[i][j];
        }
        printf("%d ", sum / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += n[i][j];
        }
        printf("%d ", sum / 4);
    }
    printf("\n");

    printf("%d\n", total / 8);

    return 0;
}