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
        printf("if the last digit of %d and it is postive and the value is %d\n", n,b);
    }
    else if(n == 0)
    {
        printf("if the last digit of %d given the number is zero the value is %d\n",n,b);
    }
    else
    {
       printf("if the last digit of %d with the number being negative the value is %d\n",n,b);
    }

    return 0;
}




