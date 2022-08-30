#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, h;
    printf("Dikdortgen prizmasinin a, b ve h uzunluklarini giriniz:\n");
    scanf("%d%d%d",&a, &b, &h);
    printf("Dikdörtgen prizmanin:\n");
    printf("     Taban alani:%d\n",a*b);
    printf("     Yanal alanlar toplami:%d\n",2*a*h + 2*b*h);
    printf("     Dikdörtgen prizmanin:%d\n",2*a*b + 2*a*h + 2*b*h);
    printf("     Dikdörtgen prizmanin:%d\n",a*b*h);


    return 0;
}
