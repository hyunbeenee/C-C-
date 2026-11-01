#include <stdio.h>

int main() {
    int n, m;
    int num=0, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &m);  
        sum+=m;
        num++;
    }
    double avg = sum / (num*1.0);
    printf("avg : %.1f\n", avg);
    if(avg >= 80){
        printf("pass");
    }else{
        printf("fail");
    }
    
    return 0;
}
