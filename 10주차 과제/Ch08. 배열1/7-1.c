#include <stdio.h>

int main() {
    int n[11], m = 0;

    for(int i=0; i<10; i++){
        scanf("%d", &n[i]);
        m += n[i];
        
    }
    printf("sum = %d\n", m);
    printf("avg = %.1f", m/10.0);
    return 0;
}