#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int* ans = (int*)malloc(sizeof(int) * 100000);
    for (int i = 0; i < n + 1; i++) {
        if (i < 2) {
            ans[i] = i;
        }
        else {
            ans[i] = ans[i - 2] + ans[i - 1];
            ans[i] %= 1234567;
        }
    }
    answer = ans[n];
    return answer;
}

// �Ǻ���ġ ���� 1234567�� ���� ��
// ���� �迭�� �� ���� �ٷ� ����������, �ð��� �ʹ� ���� �ɷ���
// �迭�� ���� ������ ��, ����ϵ��� �ٲپ���