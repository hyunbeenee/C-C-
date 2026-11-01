#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int s = (m+100) - n;
    printf("%d\n", s);
    if(s > 0){
        printf("Obesity\nNeed control");
        
    }
    return 0;
}