#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    while (left < right + 1) {
        int count = 2;
        if (left == 1)
            count = 1;
        for (int i = 2; i <= (left / 2); i++) {
            if (left % i == 0)
                count++;
        }
        if (count % 2 == 0)
            answer += left;
        else if (count % 2 == 1)
            answer -= left;
        left++;
    }
    return answer;
}

// "13, 17" = "43"
// "24, 27" = "52"
// ��ó�� ���� ���ڿ� ������ ���ڱ����� ������ �����
// ¦���̸� ���ϰ�, Ȧ���̸� ���� �Լ�