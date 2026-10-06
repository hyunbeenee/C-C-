#include <stdio.h>

// 선택 정렬 함수
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    // 배열의 마지막 원소를 제외하고 반복
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // 현재 인덱스를 최솟값으로 가정

        // 남은 원소들 중에서 최솟값의 인덱스 찾기
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // 찾은 최솟값과 현재 인덱스의 원소 교환 (Swap)
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전 배열:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 선택 정렬 실행
    selectionSort(arr, n);

    printf("정렬 후 배열 (오름차순):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}