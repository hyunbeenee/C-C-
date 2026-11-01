#include <stdio.h>

int main() {
    int n, num=1;
    scanf("%d", &n);
    while(1){
        if(num <= n){
            printf("%d ", num);
            num++;
        }else{
            break;
        }
    }

    return 0;
}