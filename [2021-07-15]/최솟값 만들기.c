#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int static upper(const void* first, const void* second) {
    if (*(int*)first > * (int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int static lower(const void* first, const void* second) {
    if (*(int*)first > * (int*)second)
        return -1;
    else if (*(int*)first < *(int*)second)
        return 1;
    else
        return 0;
}

// A_len�� �迭 A�� �����Դϴ�.
// B_len�� �迭 B�� �����Դϴ�.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    // A ������������ ����
    qsort(A, A_len, sizeof(int), upper);
    //B ������������ ����
    qsort(B, B_len, sizeof(int), lower);

    for (int i = 0; i < A_len; i++) {
        answer += A[i] * B[i];
    }
    return answer;
}

// [1,4,2] [5,4,4] = 29
// [1,2] [3,4] = 10
// ��ó�� �� �ϳ��� ���ڸ� �̾� ���� ���� ���� ���� �ּڰ��� return
// stdlib�� ���Ե� qsort()��� �Լ��� �̿��Ͽ�, ������ �ð��� �������μ� �ذ�