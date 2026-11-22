#include <stdio.h>

struct Person {
    char school[31];
    int age;
};

int main() {
    struct Person me = {"Jejuelementary", 6};
    struct Person new;

    scanf("%s %d", new.school, &new.age);

    printf("%d grade in %s School\n", me.age, me.school);
    printf("%d grade in %s School\n", new.age, new.school);
    return 0;
}