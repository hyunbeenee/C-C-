#include <stdio.h>

int main() {
    int n;
    int num=0;
    scanf("%d", &n);
    for(int i=n; i<=100; i++){
        num+=i;
    }
    printf("%d", num);
    
    return 0;
}
