#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    int a=n;
    int b=6;
    int r;
    
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    
    answer=(n*6/a)/6;
    
    
    return answer;
}