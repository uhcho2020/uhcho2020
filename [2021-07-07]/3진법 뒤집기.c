#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0;
    int count = 0;
    int m = n;
    while (m != 0) {
        m /= 3;
        count++;
    }//3������ �ڸ���
    int* arr = (int*)malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++) {
        int j = n % 3;
        arr[i] = j;
        n /= 3;
    }
    for (int k = 0; k < count; k++) {
        answer += arr[k] * pow(3, count - k - 1);
    }
    return answer;
}

// solution(45) = 7
// solution(125) = 229
// �ڿ��� n�� �Է��� ��, 3������ ��ȯ�Ѵ�
// 3�����󿡼� �յڸ� ������ ��, �ٽ� 10������ ��ȯ�Ѵ�
// �װͺ��� ȿ������ �˰����� ã�Ƽ�, ó������ �յڹ����� 3������ arr�� �����ϰ�, 10������ �ٷ� ��ȯ��.