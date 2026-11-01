#include <stdio.h>

int main() {
    int n;
    int num = 0;
    while(1){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        if(n%3==0 || n%5==0){
            continue;
        }else{
            num++;
        }
    }
    printf("%d", num);


    return 0;
}