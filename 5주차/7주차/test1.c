#include <stdio.h>

int main() {
    int num = 10;
    int *p = &num;

    printf("num의 값: %d\n\n", *p);

    num = 10;
    int val1 = (*p)++;
    printf("1. (*p)++ 반환값: %d (*p)++ 실행 후 num: %d\n\n", val1, *p);

    num = 10;
    printf("2. (*p) + 1 반환값: %d 실행 후 num: %d (변함없음)\n\n", (*p) + 1, *p);

    num = 10;
    *p += 1;
    printf("3. *p += 1 실행 후 num: %d\n\n", *p);

    num = 10;
    (*p) += 1;
    printf("4. (*p) += 1 실행 후 num: %d\n\n", *p);

    num = 10;
    *p = *p + 1;
    printf("5. *p = *p + 1 실행 후 num: %d\n\n", *p);

    num = 10;
    int val6 = ++*p;
    printf("6. ++*p 반환값: %d 실행 후 num: %d\n\n", val6, *p);

    num = 10;
    int val7 = ++(*p);
    printf("7. ++(*p) 반환값: %d 실행 후 num: %d\n", val7, *p);

    return 0;
}