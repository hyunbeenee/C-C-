#include <stdio.h>

int main() {
    int num=0, sum=0, m;
    for(int i=0; i<10; i++){
        scanf("%d", &m);
        if(m%2==0){
            num++;
        }else{
            sum++;
        }
    }
    printf("even : %d\n", num);
    printf("odd : %d", sum);
    return 0;
}
