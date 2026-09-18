#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int scount=0;
    
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count++;
                if(count>=3) break;
            }
        }
        if(count>=3) scount++;
        
    }
    answer=scount;
    
    return answer;
}