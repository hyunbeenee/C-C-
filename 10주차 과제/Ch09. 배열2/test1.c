#include <stdio.h>

int main() {
    int n[7] = {0};
    int m;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &m);
        n[m]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, n[i]);
    }

    return 0;
}