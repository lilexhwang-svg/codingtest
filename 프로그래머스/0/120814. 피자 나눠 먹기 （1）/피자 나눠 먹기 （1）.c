#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int piece=1;
    
    if(n%7==0)
        piece=n/7;
    else
        piece=n/7+1;
    
    return piece;
}