#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Lutfen bir sayi giriniz!\n");
    scanf("%d", &x);
    int i = 0;
    int count = 0;
    while (i <= x){
        if (i % 17 == 0){
            printf("%3d ",i);
            count ++;
                if (count % 10 == 0 ){
                printf("\n");
                }
        }
        i++;
    }

    return 0;
}
