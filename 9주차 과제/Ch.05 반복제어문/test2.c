#include <stdio.h>

int main() {
    int n;
    int num = 0, sum = 0;
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }else if(n%2==0){
            num++;
        }else{
            sum++;
        }
    }
    printf("odd : %d\n", sum);
    printf("even : %d", num);

    return 0;
}