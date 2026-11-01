#include <stdio.h>

int main() {
    int sum=0, num=0, n, m;
    scanf("%d %d", &n, &m);
    if(n>=m){
        for(int i=m; i<=n; i++){
            if(i%3==0||i%5==0){
                sum+=i;
                num++;
            }
        }
    }else{
        for(int i=n; i<=m; i++){
            if(i%3==0||i%5==0){
                sum+=i;
                num++;
            }
        }
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f", sum/(num*1.0));
    return 0;
}
