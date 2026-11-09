#include <stdio.h>

int main() {
    int n[101], m=0;
    for(int i=0; i<101; i++){
        scanf("%d", &n[i]);
        m++;
        if(n[i]==0){
            break;
        }
    }
    for(int i=0; i<m-1; i++){
        if((i+1)%2==0){
            printf("%d ", n[i]);
        }        
    }
    return 0;
}