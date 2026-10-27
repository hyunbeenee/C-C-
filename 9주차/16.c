#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    if(n >= 4.0){
        printf("scholarship");
    }else if(n >= 3.0){
        printf("next semester");
    }else if(n >= 2.0){
        printf("seasonal semester");
    }else{
        printf("retake");
    }
    return 0;
}