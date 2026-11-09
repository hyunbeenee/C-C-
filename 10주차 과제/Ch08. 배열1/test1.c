#include <stdio.h>

int main() {
    char n[11];

    for(int i=0; i<10; i++){
        scanf(" %c", &n[i]);
        
    }
    for(int i=9; i>=0; i--){
        printf("%c ", n[i]);
    }
    return 0;
}