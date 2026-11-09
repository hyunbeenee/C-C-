#include <stdio.h>

int main() {
    int n[101], m=-10000, s=10000;

    for(int i=0; i<101; i++){
        scanf("%d", &n[i]);
        if(n[i] == 0){
            break;
        }
        if(n[i] > m){
            m = n[i];
        }
        if(n[i] < s){
            s = n[i];
        }
    }
    printf("%d", m+s);
    return 0;
}