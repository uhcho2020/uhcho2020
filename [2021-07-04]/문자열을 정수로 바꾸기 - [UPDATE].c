#include <stdio.h>
//#include <stdbool.h>
#include <stdlib.h>
//#include <string.h>
//#include <math.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int answer = 0;
    /*int len = strlen(s);
    if(s[0] == 45){
        for(int i = 1; i < len; i++){
            answer += (s[i] - 48) * pow(10, len-i-1);
        }
        answer *= (-1);
    }
    else if(s[0] == 43){
        for(int i = 1; i < len; i++){
            answer += (s[i] - 48) * pow(10, len-i-1);
        }
    }
    else{
        for(int i = 0; i < len; i++){
            answer += (s[i] - 48) * pow(10, len-i-1);
        }
    }*/
    answer = atoi(s);
    return answer;
}