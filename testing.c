#include <stdio.h>
int main()
{
    int a;
    char* name;
    float b;
    a = 21;
    name = "jazzman";
    b = 3.2101;

    printf("this is the integer value %d\n",a);
    printf("%s is the name\n", name);
    printf("%f is the float\n", b);
    printf("my name is %s i am %d with %f naira", name, a, b);
}
