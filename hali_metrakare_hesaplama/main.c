#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kod;
    printf("Lutfen hali tipini giriniz T, B, S!\n");
    scanf("%c",&kod);
    float metrekere;
    printf("Lutfen metrekareyi!\n");
    scanf("%f", &metrekere);
    float fiyat;
    if (kod == 'T'){
        fiyat = 18 * metrekere;
        printf("Hali fiyati: %f!\n",fiyat);
    } else if (kod == 'B'){
        fiyat = 17 * metrekere;
        printf("Hali fiyati: %f!\n",fiyat);
    } else if (kod == 'S'){
        fiyat = 19 * metrekere;
        printf("Hali fiyati: %f!\n",fiyat);
    } else {
        printf("Lütfen dogru bir kod giriniz!\n");
    }
    return 0;
}
