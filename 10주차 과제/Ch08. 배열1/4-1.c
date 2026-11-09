#include <stdio.h>

int main() {
    int n[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, m;
    while(1){
        scanf("%d", &m);
        if(m==0){
            break;
        }
        printf("%d\n", n[m-1]);
    }
    return 0;
}