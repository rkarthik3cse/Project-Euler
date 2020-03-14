#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    unsigned long long n, i, j, even = 0;
    unsigned long long sum_of_square, square_of_sum, result = 0;
    scanf("%llu", &n);
    unsigned long long a[n];
 
     
     for(j=0;j<n;j++)
     {    
        scanf("%llu",&a[j]);
    }
 
 
     for(j=0;j<n;j++)
     {
         i = a[j];
 
        square_of_sum = (((i + 1) * (i)) / 2 );
        sum_of_square = ((i) * (i + 1) * ((2 * i) + 1)) / 6;  
    
        result =  pow(square_of_sum,2) - sum_of_square;

        printf("%llu\n", result);
    }

    return 0;
}

