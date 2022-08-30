#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf("a, b, c ve x sayilarini giriniz\n");
    scanf("%d%d%d%d",&a, &b, &c, &x);
    printf("Sonuc: %d",a*x*x+b*x+c);
    return 0;
}
