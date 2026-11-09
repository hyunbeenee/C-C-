#include <stdio.h>

int main() {
    int n[10];
    for(int i=0; i<10; i++){
        n[i]=i+1;
    }
    for(int i=0; i<10; i++){
        printf("%d ", n[i]);
    }
    return 0;
}