#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// a_len�� �迭 a�� �����Դϴ�.
// b_len�� �迭 b�� �����Դϴ�.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
    for (int i = 0; i < a_len; i++) {
        answer += (a[i] * b[i]);
    }
    return answer;
}

// [1,2,3,4] [-3,-1,0,2] = "3"
// [-1,0,1] [1,0,-1] = "-2"
// �� �迭�� ������ ���ϴ� �Լ�