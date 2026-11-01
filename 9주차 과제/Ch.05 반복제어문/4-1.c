#include <stdio.h>

int main() {
    int n, sum=0, num=0;
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        num++;
        sum+=n;
    }
    printf("cnt = %d\n", num);
    printf("sum = %d\n", sum);
    printf("avg = %.2f", (sum*1.0)/num);
    return 0;
}