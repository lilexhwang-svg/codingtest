#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    int th=0;
    
    
    for(int i=0;i<k-1;i++)
    {
        th=th+2;
        if(th>=numbers_len)
        {
            th=th-numbers_len;
        }
    }
    
    
    
    answer=numbers[th];
    
    return answer;
}