#include <stdio.h>
int fibonacci(int z)
{
    if (z <= 1)
    {
        return z;
    }
    else
    {
        return fibonacci(z - 1) + fibonacci(z - 2);
    }
}
void main()
{
    int i, n;
    printf("Ilk kaç tane elemaný istiyorsunuz : \n");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}
