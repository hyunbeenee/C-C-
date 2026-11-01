#include <stdio.h>

int main() {
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    if(n>=1&&m>=1&&s>=1){
        printf("All Positive");
    }else if(n==0||m==0||s>=1==0){
        printf("Contain Zero");
    }else{
        printf("Mixed");
    }
    return 0;
}