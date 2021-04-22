#include <stdio.h>
#include <stdlib.h>

int *f(unsigned int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%d",f(2));
    return 0;
}
