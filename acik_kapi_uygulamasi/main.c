#include <stdio.h>
#include <stdlib.h>

int main()
{
    int door[10] ={0};

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j % i == 0){
                door[j-1] = ! door[j-1];
            }
        }

    }

    for (int i = 0; i<10; i++){
        if(door[i]){
            printf("%d ",i+1);
        }
    }
}
