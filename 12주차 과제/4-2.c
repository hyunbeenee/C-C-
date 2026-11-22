#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main() {
    struct Person p[5];
    int n = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d", p[i].name, &p[i].height);
    }

    for (int i = 1; i < 5; i++) {
        if (p[i].height < p[n].height) {
            n = i;
        }
    }

    printf("%s %d\n", p[n].name, p[n].height);

    return 0;
}