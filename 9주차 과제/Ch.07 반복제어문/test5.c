#include <stdio.h>

int main() {
    int n;
    char num = 'A';
    int sum = 0;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            printf("%c ", num++);
        }
        for (int j=0; j<i; j++) {
            printf("%d ", sum++);
        }
        printf("\n");
    }

    return 0;
}