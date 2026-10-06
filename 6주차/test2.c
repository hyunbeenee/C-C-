#include <stdio.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    int i, j, key;

    // 두 번째 원소부터 시작 (첫 번째 원소는 이미 정렬된 것으로 간주)
    for (i = 1; i < n; i++) {
        key = arr[i]; // 이번에 정렬할 카드(데이터)
        j = i - 1;    // 정렬된 그룹의 마지막 인덱스

        // 정렬된 그룹의 원소들을 뒤에서부터 앞으로 탐색하며
        // key보다 큰 원소를 만나면 오른쪽으로 한 칸씩 밀어냄
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 자리에 key(데이터)를 삽입
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {45, 26, 10, 25, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전 배열:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 삽입 정렬 실행
    insertionSort(arr, n);

    printf("정렬 후 배열 (오름차순):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}