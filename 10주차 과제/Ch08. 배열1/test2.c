#include <stdio.h>

int main() {
    int n[6], m=0;

    for(int i=0; i<5; i++){
        scanf("%d", &n[i]);
        if(i%2==0){
            m+=n[i];
        }
    }
    printf("%d", m);
    return 0;
}