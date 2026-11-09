#include <stdio.h>

int main() {
    int n[101], m=0;
    for(int i=0; i<101; i++){
        scanf("%d", &n[i]);
        if(n[i]==0){
            break;
        }
        m++;
    }
    for(int i=m-1; i>=0; i--){
        printf("%d ", n[i]);      
    }
    return 0;
}