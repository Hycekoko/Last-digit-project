#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;
    int b;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    b = n % 10;

    if(n > 0)
    {
        printf("%d is postive is %d\n", n,b);
    }
    else if(n == 0)
    {
        printf("%d is zero is %d\n",n,b);
    }
    else
    {
       printf("%d is negative is %d\n",n,b);
    }

    return 0;
}



