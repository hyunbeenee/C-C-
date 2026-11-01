#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n>=m){
        for(int i=1; i<=9; i++){
            for(int j=n; j>=m; j--){
                printf("%d * %d = %2d   ", j, i, i*j);
            }
            printf("\n");
        }
    }else{
        for(int i=1; i<=9; i++){
            for(int j=n; j<=m; j++){
                printf("%d * %d = %2d   ", j, i, i*j);
            }
            printf("\n");
        }
    }
    
    return 0;
}
