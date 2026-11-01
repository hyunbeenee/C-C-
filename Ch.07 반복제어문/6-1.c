#include <stdio.h>

int main() {

    int s=1;
    char m = 'a';

    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            printf("%c ", m);
            m++;
        }
        for(int j=4; j>=i; j--){
            printf("%d ", s);
            s++;
        }
        printf("\n");
    }
    
    return 0;
}
