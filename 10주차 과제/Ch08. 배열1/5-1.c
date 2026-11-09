#include <stdio.h>

int main() {
    int n[101], m, x=0;

    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &n[i]);
        if(x < n[i]){
            x=n[i];
        }
    }
    printf("%d", x);
    return 0;
}