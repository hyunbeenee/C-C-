#include <stdio.h>

int main() {
    int n[101], x=-100000, y=10000;

    for(int i=0; i<101; i++){
        scanf("%d", &n[i]);
        if(n[i]==0){
            break;
        }
        if(n[i] > x){
            x=n[i];
        }
        if(n[i] < y){
            y=n[i];
        }
        
    }
    printf("%d", x-y);
    return 0;
}