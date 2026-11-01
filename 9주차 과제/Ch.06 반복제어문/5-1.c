#include <stdio.h>

int main() {
    int n;
    int num=0;
    for(int i=0; i<10; i++){
        scanf("%d", &n);
        if(n%2==0){
            num++;
        }
    }
    printf("Even numbers = %d", num);
    
    return 0;
}
