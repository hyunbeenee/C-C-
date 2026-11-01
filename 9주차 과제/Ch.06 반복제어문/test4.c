#include <stdio.h>

int main() {
    int n, m, num=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &m);
        num+=m;
    }
    printf("%.2f", num/(n*1.0));
    return 0;
}
