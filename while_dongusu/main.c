#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    printf("Pozitif bir tamsayi giriniz!\n");

    scanf("%d", &a);

    int toplam = 0;

    int i = 1;

    while (a >= i){
        if (a == i){
            printf("%d ",i);
        }else {
            printf("%d + ",i);
        }

        toplam +=i;
        i++;
    }
    printf("= %d",toplam);
    return 0;
}
