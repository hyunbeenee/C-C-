#include <stdio.h>

int main() {
    int n[10];

    scanf("%d %d", &n[0], &n[1]);

    for (int i = 2; i < 10; i++) {
        n[i] = (n[i - 2] + n[i - 1]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}