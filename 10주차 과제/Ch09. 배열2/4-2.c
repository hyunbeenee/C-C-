#include <stdio.h>

int main() {
    int n[10];
    int m;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (n[i] < n[j]) {
                m = n[i];
                n[i] = n[j];
                n[j] = m;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}