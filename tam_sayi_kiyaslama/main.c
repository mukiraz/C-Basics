#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Iki adet tamsayi giriniz\n");
    scanf("%d%d",&a, &b);
    if (a<b){
        printf("%d , %d 'e esit degildir.\n", a, b);
        printf("%d , %d 'dan kucuktur\n", a, b);
    } else if (a>b){
        printf("%d , %d 'e esit degildir.\n", a, b);
        printf("%d , %d 'dan buyuktur\n", a, b);
        if (a%b == 0){
            printf("%d , %d 'nin katidir.\n", a, b);
        }
    }else {
        printf("%d , %d 'ye esittir\n", a, b);
    }
    return 0;
}
