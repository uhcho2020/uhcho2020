#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int* solution(int numbers[], size_t numbers_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * numbers_len * (numbers_len - 1) / 2);
    int answers_len = 0;
    int count = 0;
    for (int i = 0; i < numbers_len; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            int semiAns = numbers[i] + numbers[j];
            for (int k = 0; k < answers_len; k++) {
                if (answer[k] == semiAns)
                    count++;
            }
            if (count == 0) {
                answer[answers_len] = semiAns;
                answers_len++;
            }
            count = 0;
        }
    }
    for (int i = 0; i < answers_len; i++) {
        for (int j = i + 1; j < answers_len; j++) {
            if (answer[i] > answer[j]) {
                int temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}

// [2,1,3,4,1] = [2,3,4,5,6,7]
// [5,0,2,7] = [2,5,7,9,12]
// ��ó��, 2���� ���� ���ؼ� ���� �� �ִ� ��� ����� ���� ���
// �ߺ��� ���� ������� �ʰ�, ������������ �����ؾ��Ѵ�.