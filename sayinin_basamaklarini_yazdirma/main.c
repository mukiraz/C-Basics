#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int basamak_sayisi(int sayi) {

int counter = 0;

while(sayi!=0){

    sayi = sayi / 10;
    counter++;
}

return counter;

}

int main()
{
    setlocale(LC_ALL,"Turkish");

    int deger;
    printf("Lütfen bir sayi giriniz\n");

    scanf("%d",&deger);

    int basamak = basamak_sayisi(deger);

    while(basamak != 0){

        int bolum = pow(10,basamak-1);

        int sayi = deger / bolum;

        deger = deger - sayi * bolum;
        printf("%d\t",sayi);
        basamak--;
    }


    return 0;
}
