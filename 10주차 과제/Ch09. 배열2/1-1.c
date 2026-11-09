#include <stdio.h>

int main() {
    int n[10]={0}, m;

    while(1){
        scanf("%d", &m);
        if(m>10 || m < 1){
            break;
        }
        n[m-1]++;
    }
    for(int i=0; i<10; i++){
        if(n[i]!=0){
            printf("%d : %d\n", i+1, n[i]);
        }
    }
    return 0;
}