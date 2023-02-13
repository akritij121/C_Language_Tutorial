#include <stdio.h>

int main()
{
    int n;
    printf("enter n- \n");
    scanf("%d", &n);
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