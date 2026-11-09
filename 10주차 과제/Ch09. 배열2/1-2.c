#include <stdio.h>

int main() {
    int n[26] = {0};
    char m;

    while (1) {
        scanf(" %c", &m);
        if (m < 'A' || m > 'Z') {
            break;
        }
        n[m - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (n[i] != 0) {
            printf("%c : %d\n", 'A' + i, n[i]);
        }
    }

    return 0;
}