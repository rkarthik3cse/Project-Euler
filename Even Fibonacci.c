/*
 * Key Idea:
 *
 *Index:  0	1	2	3	4	5	6	7	8	9	...
 *Number: 0	1	1	2	3	5	8	13	21	34	...
 *
 * Indexes which are integral multipples of 3 are even numbers.
 */


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long n_t=0,i=0,j=2,l=0,number = 0,max=0,result=0,fib[100000]={0}; 
    scanf("%lld",&n_t);
    long long n[n_t];
    
    for(i = 0; i < n_t; i++)
    {
        scanf("%lld",&n[i]);            
    }
    max = n[0];
    for(i = 1; i < n_t; i++)
    {
        if(max<n[i])
        {
            max = n[i];
        }
    }

    fib[0] = 0;
    fib[1] = 1;
    
    while(1)
    {
        fib[j] = fib[0] + fib[1];
        
        if(fib[j]>max)
        {
            j--;
            break;
        }
        
        fib[0] = fib[1];
        fib[1] = fib[j];
        j++;
    }
    
    fib[0] = 0;
    fib[1] = 1;
    
    for(i = 0; i < n_t; i++)
    {
        number = n[i];
        result = 0;
        for(l=3;l<=j;l=l+3)
        {
            //printf("%lld     %lld       %lld\n",i,fib[l],result);
            result += fib[l];
            if(fib[l]>number)
            {
                result -= fib[l];
                break;
            }
        }
        printf("%lld\n",result);
        
    }
    
    return 0;
}

