#include <stdio.h>

int main() {
    double n[6]={85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.1f", n[x-1] + n[y-1]);
    return 0;
}