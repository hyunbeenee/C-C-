#include <stdio.h>

int main() {
    int n[100];

    n[0] = 100;
    scanf("%d", &n[1]);

    printf("%d %d ", n[0], n[1]);

    for (int i = 2; ; i++) {
        n[i] = n[i - 2] - n[i - 1];
        printf("%d ", n[i]);
        if (n[i] < 0) {
            break;
        }
    }

    return 0;
}