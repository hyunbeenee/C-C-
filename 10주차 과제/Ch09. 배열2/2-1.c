#include <stdio.h>

int main() {
    int n[10] = {0};
    int m;

    while (1) {
        scanf("%d", &m);
        if (m == 0) {
            break;
        }
        n[m % 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (n[i] != 0) {
            printf("%d : %d\n", i, n[i]);
        }
    }

    return 0;
}