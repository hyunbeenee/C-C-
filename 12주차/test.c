#include <stdio.h>
struct Student
{
    char name[50];
    int score;
};

int main()
{
    int count;
    struct Student s;
    FILE *fp;
    fp = fopen("Student.txt", "w");
    
    if(fp == NULL){
        printf("파일 열기 실패");
        return 1;
    }

    //학생 수 입력받고 count 변수에 저장 후 반복문에서 학생수 만큼 입력(이름 점수)
    //구조체 멤버 변쉥 저장 받아
    //ex)학생수 입력 : 5
    printf("학생 수 입력");
    scanf("%d", &count);

    //입력 받은 학생수 만큼 반복하면서 구조체 멤버변수에 데이터를 저장
    for(int i=0; i<count; i++){
        printf("\n%d 번째 이름",i+1);
        scanf("%49s", s.name);

        printf("점수: ");
        scanf("%d", &s.score);
        //fprintf(파일포인터, 서식문자, 저장할값)
        fprintf(fp, "%s %d\n", s.name, s.score);
    }
    fclose(fp);

    return 0;
}

