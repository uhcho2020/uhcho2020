#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len�� �迭 lottos�� �����Դϴ�.
// win_nums_len�� �迭 win_nums�� �����Դϴ�.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int) * 2);
    int count1 = 0;  //�ְ����
    int count2 = 0;  //��������

    //��÷��ȣ�� �ζǹ�ȣ�� ������ �� ���� ��� ++
    //�ζǹ�ȣ�� 0�� ��쿡�� �ְ������ ++
    for (int i = 0; i < lottos_len; i++) {
        for (int j = 0; j < lottos_len; j++) {
            if (lottos[i] != 0 && lottos[i] == win_nums[j]) {
                count1++;
                count2++;
            }
        }
        if (lottos[i] == 0)
            count1++;
    }
    answer[0] = 7 - count1;
    answer[1] = 7 - count2;
    //������ 6��������̴�, 6�̻��� ���� 6���� ����
    for (int i = 0; i < 2; i++) {
        if (answer[i] > 6)
            answer[i] = 6;
    }

    return answer;
}

// [44,1,0,0,31,25] [31,10,45,1,6,19] = [3,5]
// [0,0,0,0,0,0] [38,19,20,40,15,25] = [1,6]
// [45,4,35,20,3,9] [20,9,3,45,4,35] = [1,1]
// �ζǹ�ȣ�� ��÷��ȣ�� ���Ͽ� �ְ���� ���������� �˾Ƴ��� �Լ�
// 0�� ������ ��ȣ. �𸣴� ��ȣ��.