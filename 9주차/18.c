#include <stdio.h>

int main() {
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    if(n < m && n < s){
        printf("%d", n);
    }else if(m < n && m < s){
        printf("%d", m);
    }else{
        printf("%d", s);
    }
    return 0;
}