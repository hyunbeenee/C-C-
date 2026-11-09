#include <stdio.h>

int main() {
    int n[101], m=0, s=0;

    for(int i=0; i<101; i++){
        scanf("%d", &n[i]);
        if(n[i] == 0){
            break;
        }
        if(n[i] % 5 == 0){
            m+=n[i];
            s++;
        }
    }
    printf("Multiples of 5 : %d\n", s);
    printf("sum : %d\n", m);
    printf("avg : %.1f\n", m / (s*1.0));
    return 0;
}