#include <stdio.h>

int main() {
    int n[5] = {95, 75, 85, 100, 50};
    int m;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (n[i] > n[j]) {
                m = n[i];
                n[i] = n[j];
                n[j] = m;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}