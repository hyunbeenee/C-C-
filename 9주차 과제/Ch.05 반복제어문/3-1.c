#include <stdio.h>

int main() {
    int n;
    while(1){
        scanf("%d", &n);
        if(n < 0 || n > 100){
            break;
        }else{
            if(n >= 80){
                printf("Pass\n");
            }else{
                printf("Fail\n");
            }
        }
    }
    return 0;
}