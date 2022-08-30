#include <stdio.h>
int DiziToplam(int A[], int N)
{
    if (N == 1) return A[0];

    int orta = N / 2;

    int localSum1 = DiziToplam(&A[0], orta);

    int localSum2 = DiziToplam(&A[orta], N - orta);

    return localSum1 + localSum2;
}
int main()
{
    int a;
    int A[] = { -1, 13, 17, -6, 0, 18, 20, 12 };
    a = DiziToplam(A, 8);
    printf("Dizinin elemanlarinin toplami : %d\n", a);
}
