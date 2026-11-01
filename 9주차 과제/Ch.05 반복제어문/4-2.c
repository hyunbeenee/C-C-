#include <stdio.h>

int main() {
    int n;
    int sum = 0, num = 0;

    while (1) {
        scanf("%d", &n);
        
        if (n < 50) {
            sum++;
        } else {
            num++;
        }
    
        if (n >= 100) {
            break;
        }
    }

    printf("small : %d\n", sum);
    printf("large : %d\n", num);

    return 0;
}