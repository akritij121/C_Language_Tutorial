#include <stdio.h>

int main()
{
    float n;
    int i;
    printf("enter a number");
    scanf("%f", &n);
    i = n;
    if (n <= 0)
    {
        printf("n is a not natural number");
    }
    else if (n != i)
    {
        printf("n is not a natural number");
    }
    else
    {
        printf("n is a natural number");
    }

    return 0;
}