#include <stdio.h>

int main() {
    int n[11], x=1001;

    for(int i=0; i<10; i++){
        scanf("%d", &n[i]);
        if(x > n[i]){
            x=n[i];
        }
    }
    printf("%d", x);
    return 0;
}