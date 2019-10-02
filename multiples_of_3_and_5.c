 /*
  * Key Idea:
  *	Use Arithmetic Progression to get sum of multiples of 3 and sum of multiples of 5. Multiples of 15 are included in summations. So Subtract 
  *	multiples of 15 once.
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
     long long i=0,n_t=0,number=0,dummy=0,l=0,count=0,result=0;     
     scanf("%lld",&n_t);
     long long n[n_t],three[n_t],five[n_t],fifteen[n_t];
     for(i=0;i<n_t;i++)
     {
         scanf("%lld",&n[i]);
     }
     
     for(i=0;i<n_t;i++)
     {
         result = 0;
         three[i] = 0;
         five[i] = 0;
         fifteen[i] = 0;
         number = n[i];
         dummy = number % 3;
         if(dummy == 0)
         {
             number -=3;
         }
         else
         {
             number -=dummy;
         }
         l = number;
         count = number / 3;         
         three[i] =  ((count)*(3+l)/2);
         
         
         number = n[i];
         dummy = number % 5;
         if(dummy == 0)
         {
             number -=5;
         }
         else
         {
             number -=dummy;
         }
         l = number;
         count = number / 5;         
         five[i] =  ((count)*(5+l)/2);
         
         
         number = n[i];
         dummy = number % 15;
         if(dummy == 0)
         {
             number -=15;
         }
         else
         {
             number -=dummy;
         }
         l = number;
         count = number / 15;         
         fifteen[i] =  ((count)*(15+l)/2);         
         result = three[i] + five[i] - fifteen[i];
         printf("%lld\n",result);
     }     
     return 0;
 }










