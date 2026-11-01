#include <stdio.h>

int main() {
    int n;
    int m=1;
    int sum=0;
    scanf("%d", &n);
    while(1){
        sum += m;
        m++;        
        if(m > n){
            break;
        }
    }
    printf("%d", sum);
    return 0;
}