#include <stdio.h>

int main() {
    int n;
    int num=0, sum=0;
    for(int i=0; i<10; i++){
        scanf("%d", &n);
        if(n%3==0){
            num++;
        }
        if(n%5==0){
            sum++;
        }
    }
    printf("Multiples of 3 : %d\n", num);
    printf("Multiples of 5 : %d", sum);
    
    return 0;
}
