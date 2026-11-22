#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;
};

void input(struct Student a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%19s %d %d %d", a[i].name, &a[i].score[0], &a[i].score[1], &a[i].score[2]);
        a[i].total = a[i].score[0] + a[i].score[1] + a[i].score[2];
    }
}

void sort(struct Student a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j].total < a[j + 1].total) {
                struct Student tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

void output(struct Student a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", a[i].name, a[i].score[0], a[i].score[1], a[i].score[2], a[i].total);
    }
}