#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Uc farkli tammsayi giriniz!\n");
    scanf("%d%d%d",&a, &b, &c);
    int max = a;

    if (b>max){
        max = b;
    }
    if (c>max) {
        max = c;
    }

    int min = a;

    if (b<min){
        min = b;
    }
    if (c<min) {
        min = c;
    }

    printf("En kucuk sayi: %d\n",min);
    printf("En buyuk sayi: %d\n",max);


    return 0;
}
