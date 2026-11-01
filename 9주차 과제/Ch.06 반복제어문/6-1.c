#include <stdio.h>

int main() {
    int n;
    int num=0, sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        sum+=n;
        num++;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", sum/(num*1.0));
    
    return 0;
}
