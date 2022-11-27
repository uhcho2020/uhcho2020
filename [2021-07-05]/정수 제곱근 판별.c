#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    for (int i = 0; i <= sqrt(n); i++) {
        answer = i;
    }
    if (answer == sqrt(n))
        answer = pow((answer + 1), 2);
    else
        answer = -1;
    return answer;
}

//solution(121) = 144
//solution(3) = -1
//��ó�� �Է��� ���� �������� �����̸� ������+1�� ������,
//�������� ������ �ƴϸ� -1�� return