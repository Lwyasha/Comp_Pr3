#include <time.h>

void vvod_ms(int*B, int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
        B[i]=-50 + rand()%100;
}

void fun_ms(int* B, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
        if(B[i]%3==0)
            if(B[i]%5!=0)
                count++;
    printf("\ncA = %d\n", count);
}

void vivod_ms(int*B, int n)
{
    printf("\nMassiv:\n");
    for(int i=0; i<n; i++)
        printf("%d ", B[i]);
}

void vvod_mt(int*B, int n)
{
    printf("vvod_mt: Work with massiv! This func isnot using\n");
}

int fun_mt(int* B, int n)
{
    printf("fun_mt: Work with massiv! This func isnot using\n");
    return 0;
}

void vivod_mt(int*B, int a, int b)
{
    printf("vivod_mt: Work with massiv! This func isnot using\n");
}
