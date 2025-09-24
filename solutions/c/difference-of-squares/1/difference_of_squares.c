#include <stdint.h>
#include "difference_of_squares.h"

unsigned int square_of_sum( unsigned int  n)
{
    uint64_t    square_of_sum;
    
    square_of_sum = 0;
    while(n > 0)
    {
        square_of_sum += n;
        n--;
    }
    square_of_sum *= square_of_sum;
    
    return (unsigned int)(square_of_sum);
}

unsigned int sum_of_squares( unsigned int  n)
{
    uint64_t        sum_of_squares;
    unsigned int    i;

    sum_of_squares = 0;
    i = 1;
    while( i <= n)
    {
        sum_of_squares += (i * i);
        i++;
    }
    return (unsigned int)(sum_of_squares);
}

unsigned int difference_of_squares( unsigned int  n)
{
    uint64_t        square_of_sum;
    uint64_t        sum_of_squares;
    unsigned int    n_initial;
    
    n_initial = n;
    square_of_sum = 0;
    sum_of_squares = 0;
// square of the sum
while(n > 0)
{
    square_of_sum += n;
    n--;
}
square_of_sum *= square_of_sum;
// sum of squares
    n = 1;
    while( n <= n_initial)
    {
        sum_of_squares += (n * n);
        n++;
    }
    
    return (unsigned int)(square_of_sum - sum_of_squares);
}
