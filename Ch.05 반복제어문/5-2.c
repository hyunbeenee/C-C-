#include <stdio.h>

int main() {
    int n;
    int max=0, min = 101;

    while (1) {
        scanf("%d", &n);

        if(n==-1){
            break;
        }
        if(n%3==0){
            printf("%d\n", n/3);
        }
    }

    return 0;
}