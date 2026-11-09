#include <stdio.h>

int main() {
    int count;
    int n[20];
    int m;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (n[i] < n[j]) {
                m = n[i];
                n[i] = n[j];
                n[j] = m;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", n[i]);
    }

    return 0;
}