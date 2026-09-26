#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0;
    int count=0;
    int n2=n;
    
    while(n2>0)
    {
        n2=n2/10;
        count++;
    }
    int num=count;
    
    for(int i=0;i<count;i++)
    {
        answer=answer+(n%10);
        n/=10;
    }
    
    return answer;
}