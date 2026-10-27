#include <stdio.h>

int main() {
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    if(n > m && n > s){
        printf("max = %d", n);
    }else if(m > n && m > s){
        printf("max = %d", m);
    }else{
        printf("max = %d", s);
    }
    return 0;
}