#include <stdio.h>

int factorial(int N)
{
    printf("%d\n", N);
    if(N!=0)
    {
        printf("%d\n", N);
        return N*factorial(N -1);
    }

    return 1;
}

/*
 * Mail for fib
 * */
int main()
{
    printf("%d\n", factorial(3));
    return 0;
}
