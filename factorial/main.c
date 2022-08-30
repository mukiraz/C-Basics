#include<stdio.h>
int memory[100] = {1, 1};
int factorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        int i;
        for(i=2; i<=n; i++) {
        if(memory[i] == 0)
        {
            memory[i] = i * memory[i-1];
        }
    }
        return memory[n];
    }
}

int main(void) {
    int n;
    for(n=1; n<10; n++)
    {
        printf("%d! = %d\n", n, factorial(n));
    }
    getch();
    return 0;
}
