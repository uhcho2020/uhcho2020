#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
char* solution(int numbers[], size_t numbers_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(1);
    int** nums = (int**)malloc(sizeof(int*) * numbers_len);
    int* copy = (int*)malloc(sizeof(int) * numbers_len);
    strcpy(copy, numbers);
    // numbers_len�� 4��¥�� 2���� �迭 �����Ҵ�
    for (int i = 0; i < numbers_len; i++) {
        nums[i] = (int*)malloc(sizeof(int) * 4);
    }
    // 1���� ��(ó�� ������ ��)�� ���ϱ� ���� copy�� ��� ���� 1000 �̻��� �ǵ��� ����
    for (int i = 0; i < numbers_len; i++) {
        if (copy[i] == 0)
            continue;
        else {
            while (copy[i] > 999) {
                copy[i] *= 10;
            }
        }

    }
    //�迭�� �� ä���ֱ�
    for (int i = 0; i < numbers_len; i++) {
        for (int j = 0; j < 4; j++) {
            nums[i][3 - j] = copy[i] % 10;
            copy[i] /= 10;
        }
    }


    return answer;
}
/*
[6,10,2] = 6210
[3,30,34,5,9] = 9534330
�Ʒ��Ͱ��� �迭�� ¥��, �� ���� ù��° ���� ���Ϸ� ������,
3, 30�� ���� �迭���� ������ �� ���� ���� ��츦 ó���� ����� �������� ���� ������

  i = numbers[i]
j 3 3 3 5 9
  0 0 4 0 0
  0 0 0 0 0
  0 0 0 0 0 */