#include <stdio.h>

int main() {
    int n[4][3];
    int total = 0;

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &n[i][j]);
            sum += n[i][j];
        }
        total += sum;
        printf("%d\n", sum);
    }

    printf("%d\n", total);

    return 0;
}