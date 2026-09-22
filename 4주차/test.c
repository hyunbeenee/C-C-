#include <stdio.h>

int printnum(int n){
    if(n==0){
        return;
    }
    printnum(n-1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printnum(n);
    return 0;
}