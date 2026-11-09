#include <stdio.h>

int main() {
    double n[6], m=0.0;

    for(int i=0; i<6; i++){
        scanf("%lf", &n[i]);
        m+=n[i];
    }
    printf("%.1f", m/6);
    return 0;
}