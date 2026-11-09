#include <stdio.h>

int main() {
    char n[10];
    for(int i=0; i<10; i++){
        scanf(" %c", &n[i]);
    }
    for(int i=0; i<10; i++){
        printf("%c", n[i]);
    }
    return 0;
}