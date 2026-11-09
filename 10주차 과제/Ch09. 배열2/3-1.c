#include <stdio.h>

int main() {
    int n[20];

    n[0] = 1;
    n[1] = 1;

    for (int i = 2; i < 20; i++) {
        n[i] = n[i - 2] + n[i - 1];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}