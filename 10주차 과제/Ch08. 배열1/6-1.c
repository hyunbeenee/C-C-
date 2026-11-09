#include <stdio.h>

int main() {
    long long int n[11], x=100000000, y=-10000000;

    for(int i=0; i<10; i++){
        scanf("%lld", &n[i]);
        if(x > n[i]){
            x=n[i];
        }
        if(y < n[i]){
            y=n[i];
        }
    }
    printf("%lld %lld", y, x);
    return 0;
}