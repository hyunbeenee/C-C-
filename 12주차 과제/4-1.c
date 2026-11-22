#include <stdio.h>

struct Student {
    char name[101];
    int score;
};

int main() {
    struct Student s[5];
    int n = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%100s %d", s[i].name, &s[i].score);
    }

    for (int i = 1; i < 5; i++) {
        if (s[i].score > s[n].score) {
            n = i;
        }
    }

    printf("%s %d\n", s[n].name, s[n].score);

    return 0;
}