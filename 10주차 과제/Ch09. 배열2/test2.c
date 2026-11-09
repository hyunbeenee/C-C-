#include <stdio.h>

int main() {
    int n[11] = {0};
    int m;

    while (1) {
        scanf("%d", &m);
        if (m == 0) {
            break;
        }
        n[m / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (n[i] != 0) {
            printf("%d : %d\n", i * 10, n[i]);
        }
    }

    return 0;
}