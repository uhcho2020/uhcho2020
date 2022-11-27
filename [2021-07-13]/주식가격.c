#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len�� �迭 prices�� �����Դϴ�.
int* solution(int prices[], size_t prices_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * prices_len);
    int k = 0;
    for (int i = 0; i < prices_len - 1; i++) {
        int count = 0;
        for (int j = i + 1; j < prices_len; j++) {
            if (prices[i] <= prices[j]) {
                count++;
            }
            else {
                count++;
                break;
            }
        }
        answer[i] = count;
        answer[prices_len - 1] = 0;
    }
    return answer;
}

// [1,2,3,2,3] = [4,3,1,1,0]
// [1,2,3,2,3,1] = [5,4,1,2,1,0]
// ��ó�� �ֽ� ������ �������� ���� �Ⱓ�� �� ������ return
// 1�� �ڿ� ������ ����������, 1�ʰ� ������ �������� ���� ������ ����.