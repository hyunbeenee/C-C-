#include <stdio.h>
#include <string.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main() {
    struct Contact c[3];
    int first = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s %s %s", c[i].name, c[i].tel, c[i].addr);
    }

    for (int i = 1; i < 3; i++) {
        if (strcmp(c[i].name, c[first].name) < 0) {
            first = i;
        }
    }

    printf("name : %s\n", c[first].name);
    printf("tel : %s\n", c[first].tel);
    printf("addr : %s\n", c[first].addr);

    return 0;
}