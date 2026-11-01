#include <stdio.h>

int main() {
    int n, num=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%5==0){
            num+=i;
        }
    }
    printf("%d", num);
    return 0;
}
