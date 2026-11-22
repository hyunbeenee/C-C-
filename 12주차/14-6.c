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
    FILE *pass;
    FILE *fail;
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

    fp = fopen("student.txt", "r");
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");

    //만약 세 파일 중 하나라도 열기에 실패했다면
    if(fp == NULL || pass == NULL || fail == NULL){
        //오류 메시지 출력한다
        printf("파일 열기 실패\n");
        //성공적으로 열린 파일은 닫는다
        if(fp!=NULL) fclose(fp);
        if(pass!=NULL) fclose(pass);
        if(fail!=NULL) fclose(fail);

        //프로그램을 종료
        return 1;
    }

    while(fscanf(fp, "%49s %d", s.name, &s.score) == 2){
        if(s.score >= 80){
            fprintf(pass, "%s %d\n", s.name, s.score);
        }else{
            fprintf(fail, "%s %d\n", s.name, s.score);
        }
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);

    printf("파일 저장 및 분류 완료!");

    return 0;
}

