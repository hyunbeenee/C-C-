#include <stdio.h>
#include <string.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score x, struct Score y) {
    struct Score res;
    strcpy(res.name, "Total");
    res.kor = x.kor + y.kor;
    res.eng = x.eng + y.eng;
    return res;
}