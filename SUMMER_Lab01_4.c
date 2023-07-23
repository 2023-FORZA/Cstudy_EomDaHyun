//백준 2776 암기왕

#include <stdio.h>

int binary_search(int arr[], int n, int num) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == num) {
            return 1; // 수첩1에 숫자가 있으면 1 반환
        } else if (arr[mid] < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return 0; // 수첩1에 숫자가 없으면 0 반환
}

void quicksort(int arr[], int left, int right) {
    if (left >= right) return;

    int pivot = arr[(left + right) / 2];
    int i = left, j = right;

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    quicksort(arr, left, j);
    quicksort(arr, i, right);
}

int main() {
    int t, n, m, num;
    scanf("%d", &t); // 테스트케이스의 개수 입력

    for (int i = 0; i < t; i++) {
        scanf("%d", &n); // 수첩1에 적어 놓은 정수의 개수 입력
        int v[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &v[j]); // 수첩1에 적어 놓은 정수들 입력
        }
        quicksort(v, 0, n - 1); // 수첩1 정렬

        scanf("%d", &m); // 수첩2에 적어 놓은 정수의 개수 입력
        for (int k = 0; k < m; k++) {
            scanf("%d", &num);
            printf("%d\n", binary_search(v, n, num)); // 결과 출력
        }
    }

    return 0;
}
