#include <stdio.h>

int main() {

    int n, s=1;
    char m = 'A';
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf("%d ", s);
            s++;
        }
        for(int j=1; j<=i; j++){
            printf("%c ", m);
            m++;
        }
        printf("\n");
    }
    
    return 0;
}
