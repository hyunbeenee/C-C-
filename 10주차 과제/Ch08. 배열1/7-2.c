#include <stdio.h>

int main() {
    int n[11], m = 0, s=0;

    for(int i=0; i<10; i++){
        scanf("%d", &n[i]);
        
        if((i+1)%2!=0){
            s+=n[i];
        }else{
            m+=n[i];
        }
        
    }
    printf("sum : %d\n", m);
    printf("avg : %.1f", s/5.0);
    return 0;
}