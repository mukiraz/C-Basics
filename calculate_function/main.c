#include <stdio.h>
#include <stdlib.h>

int functionxxx(float x){
 return x*x*x + 13*x*x + 47*x + 5;
}

int main()
{
    float x, result;
    printf("Bir reel sayi giriniz!\n");
    scanf("%f",&x);
    result = functionxxx(x);
    printf("Sonuc: %f",result);
    return 0;
}


