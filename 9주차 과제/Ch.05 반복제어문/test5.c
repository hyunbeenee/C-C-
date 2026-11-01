#include <stdio.h>

int main() {
    int n, m;
    char s;
    int num = 0;
    while(1){
        scanf("%d %d", &n, &m);
        printf("Triangle area = %.1f\n", (n*m)/2.0);
        printf("Continue? ");
        scanf(" %c", &s);
        if(s=='Y'||s=='y'){
            continue;
        }else{
            break;
        }
    }
    return 0;
}