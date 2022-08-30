#include <stdio.h>
#define M 4
#define N 3
int main(void)
{
    int dizi[M][N] = {{1,2,3}, {4,5,6}, {7}, 8,9,10};
    int i, j;
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("dizi[%d][%d] = %d\n", i, j, dizi[i][j]);
        }
    }
    getch();
    return 0;
}
