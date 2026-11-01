#include <stdio.h>

int main() {
    int num=1;
    int sum=0;
    while(1){
        sum += num;
        num++;
        if(num > 10){
            break;
        }
    }
    printf("sum = %d\nnum = %d", sum, num);
    return 0;
}