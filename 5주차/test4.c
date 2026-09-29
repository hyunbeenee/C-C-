#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int count[10]={0};
    int result;

    result = a * b * c;

    while(result > 0){
        count[result % 10]++;
        result /= 10;
    }
    for(int i=0; i< 10; i++){
        printf("%d\n", count[i]);
    }
    return 0;
}