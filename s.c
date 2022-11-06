#include <time.h>

void vvod_mt(int*B, int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
        B[i]=-50 + rand()%100;
}

void fun_mt(int* B, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
        if(B[i]%3==0)
            if(B[i]%5!=0)
                count++;
    printf("\ncD = %d\n", count);
}

void vivod_mt(int*B, int a, int b)
{
    printf("\nMatrix:\n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
            printf("%d ", B[i*b+j]);
        printf("\n");
    }
}

void vvod_ms(int*B, int n)
{
    printf("vvod_ms: Work with matrix! This func isnot using\n");
}

int fun_ms(int* B, int n)
{
    printf("fun_ms: Work with matrix! This func isnot using\n");
    return 0;
}

void vivod_ms(int*B, int a)
{
    printf("vivod_ms: Work with matrix! This func isnot using\n");
}
