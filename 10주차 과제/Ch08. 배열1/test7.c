#include <stdio.h>

int main() {
    int n[101], s=0;

    for(int i=0; i<101; i++){
        scanf("%d", &n[i]);
        if(n[i]==0){
            break;
        }
        if(n[i]%2==0){
            n[i] = n[i] / 2;
        }else{
            n[i] = n[i] * 2;
        }
        s++;
    }
    printf("%d\n", s);
    for(int i=0; i<s; i++){
        printf("%d ", n[i]);
    }
    return 0;
}