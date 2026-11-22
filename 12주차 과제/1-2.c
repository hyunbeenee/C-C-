#include <stdio.h>

struct Person {
    char name[21];
    char school[21];
    int age;
};

int main() {
    struct Person p;

    scanf("%s", p.name);
    scanf("%s", p.school);
    scanf("%d", &p.age);

    printf("Name : %s\n", p.name);
    printf("School : %s\n", p.school);
    printf("Grade : %d\n", p.age);    

    return 0;
}