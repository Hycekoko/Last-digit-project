#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
    int n;
    int b;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes there */
    b = n % 10;
    if (b > 5)
    {
        printf("The last digit of %d is %d and greater than 5\n", n,b);
    }
    else if (b == 0)
    {
        printf("The last digit of %d is %d and is 0\n", n,b);
    }
    else
    {
        printf("The last digit of %d is %d and is less than 6 and not 0\n", n,b);
    }
    return (0);
}

