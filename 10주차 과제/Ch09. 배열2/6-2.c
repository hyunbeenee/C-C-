#include <stdio.h>

int main() {
    int n[5][4];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &n[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += n[i][j];
        }
        printf("%d %.1f\n", sum, (double)sum / 4);
    }

    return 0;
}