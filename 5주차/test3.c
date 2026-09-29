#include <stdio.h>

int main()
{
    int num[11] = {0};
    int n;

    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        num[n/10]++;
    }
    for(int i = 10; i >= 0; i--){
        if(num[i] > 0){
            printf("%d : %d person\n", i * 10, num[i]);
        }
    }

    return 0;
}