#include <stdio.h>

int main()
{
    char n;
    printf("enter n");
    scanf("%ch", &n);
    if (n >= 0 && n <= 9)
    {
        printf("n is a digit");
    }
    else
    {
        printf("n is not a digit");
    }

    return 0;
}