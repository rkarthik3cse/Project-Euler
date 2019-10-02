/*Key Idea:

Generate i , j  and k such that they Pythogorean Triplet and their sum is <= 3000.
Store their sum in an array.
Get the number and find number % sum[i].
Iterate thorugh all Triplet's sum.
Out of the given Triplets , Find which Triplet has maximum product value.
Print it

*/

#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0 , j = 0 , k = 0 , l = 0 , sum = 0 , n_t = 0 , flag = 0 , su = 0 , aa = 0 , bb = 0 , cc = 0 , failure = -1 , number = 0;
	long long result = 0 , product = 0;
	int a[1204] = {0} , b[1204] = {0} , c[1204] = {0} , s[1204] = {0};
	scanf("%d",&n_t);
	int num[n_t];
	for(i=0;i<n_t;i++)
	{
		scanf("%d",&num[i]);
	}

	//printf("i\tj\tk\tsum\n");
	for(i=3;i<841;i++)
	{
		for(j=(i+1);j<1444;j++)
		{
			for(k=(j+1);k<1446;k++)
			{
				sum = i+j+k;					
				if(sum<=3000)
				{			
					if((pow(i,2)+pow(j,2))==pow(k,2))
					{		
						//printf("%d\t%d\t%d\t%d\n",i,j,k,sum);
						a[l] = i;
						b[l] = j;
						c[l] = k;
						s[l] = sum;
						l++;
						break;
					}
				}
			}
		}
	}
	
	for(i = 0 ; i < n_t ; i++)
    	{
		number = num[i];
		flag = 0;
		result = 0;	
		su = 0;
		aa = 0;
		bb = 0;
		cc = 0;
		for(j = 0 ; j < 1204 ; j++)
    		{
  			if((number % s[j]) == 0)
				{
					k = number / s[j];
					aa = k * a[j];
					bb= k * b[j];
					cc = k * c[j];
					su = aa + bb + cc;
					if(su == number)
					{
						product = aa * bb * cc;
						if(result < product)
						{
							result = product;
						}
						flag = 1;
					}
				}			
	    	}
	    	if(flag == 1)
	    	{
	    		//printf("\n%d\t%d\t%d\t%lld\t%lld\n",aa,bb,cc,product,result);
	    		printf("%lld\n",result);
	    	}
		else
	 	{
	    	 	//printf("%d\t%d\n",number,failure);
	    	 	printf("%d\n",failure);
	    	}
	}
	return 0;
}



