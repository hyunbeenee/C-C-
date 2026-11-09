#include <stdio.h>

int main() {
    int n[11], m=0, s=0;

    for(int i=0; i<10; i++){
        scanf("%d", &n[i]);
        if(i%2==0){
            m+=n[i];
        }else{
            s+=n[i];
        }
    }
    printf("odd : %d\n", m);
    printf("even : %d\n", s);
    return 0;
}