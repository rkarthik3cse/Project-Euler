/* Key Idea:
 *
 *
 * k , n , m are integers. 
 *
 * Get list of primes less than or equal to n.
 * For each valid prime do the following.
 * 	1)Raise each prime number (k) to m and stop when it becomes greater than n.
 * 	2)Decrement m by 1.
 * 	3)Now  raise k to the power m.
 * 	4)Store it in an array.
 * The result is the integral multiple of array elements.
 *
 *
 *
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
    int n_t=0,i=0,number=0,result=1,l=0,k=0,j=0,dummy=0,z=0; 
    scanf("%d",&n_t);
    int n[10]={0};
    int prime[12]={2,3,5,7,11,13,17,19,23,29,31,37};
    int pow_limit[12]={0};
    
    for(i=0;i<n_t;i++)
    {     
        scanf("%d",&n[i]);
    }

   
    for(z=0;z<n_t;z++)
    {
        result=1;
        number = n[z];                
        for(l=11;l>=0;l--)
        {
            if(prime[l]<=number)
            {
                k=l;
                break;
            }
        }
        
        for(i=0;i<=k;i++)
        {
            for(j=1;j<=6;j++)                   
            {
                dummy=pow(prime[i],j);                
                
                if(dummy==number)
                {                    
                    pow_limit[i]=j;
                    break;
                }               
                if(dummy>number)
                {
                    j--;
                    pow_limit[i]=j;
                    break;
                }               
            }
        }
        
        for(i=0;i<=k;i++)
        {     
            result *= pow(prime[i],pow_limit[i]);            
        }
        printf("%d\n",result);        
    }        
    return 0;
}





