#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len�� �迭 absolutes�� �����Դϴ�.
// signs_len�� �迭 signs�� �����Դϴ�.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    for (int i = 0; i < absolutes_len; i++) {
        if (signs[i] == 0)
            absolutes[i] *= (-1);
        answer += absolutes[i];
    }
    return answer;
}

// [4, 7, 12] [true, false, true] = 9
// ù �迭�� ���� ���밪, �ι�° �迭�� true�� ���, false�� ������ ǥ��
// answer�� ���� �������� ���� ���� ���Ѵ�