#include <stdio.h>

#define MAX_STUDENTS 50

void bubbleSort(int* arr, int size);

void bubbleSort(int* arr, int size){
    for(int i=0; i< size-1; i++){
        for(int j=0; j<size- i - 1; j++){
            if(*(arr+j) > *(arr+ j +1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}
int main(){
    int numStudent;
    printf("학생 수를 입력하세요. (최대 50명) : ", MAX_STUDENTS);
    scanf("%d", &numStudent);

    if(numStudent > MAX_STUDENTS){
        printf("입력 가능한 학생 수를 초과했습니다. \n");
        return 1;
    }
    int* gradesPointer;
    int grades[MAX_STUDENTS];
    gradesPointer = grades;

    for(int i=0; i<numStudent; i++){
        printf("%d번 학생의 최종 성적을 입력하세요. : ", i+1);
        scanf("%d", gradesPointer+i);
    }

    bubbleSort(gradesPointer, numStudent);

    printf("\n정렬된 성적 : ");
    for(int i=0; i < numStudent; i++){
        printf("%d ", *(gradesPointer + i));
    }
    printf("\n\n최고 성적 : %d\n", *(gradesPointer + numStudent - 1));
    printf("최하 성적 : %d\n", *gradesPointer);

    return 0;
}