#include "load.h"
#include "fun.h"
#include <stdio.h>
#include <windows.h>


void LoadRun(const char * const s)
{
    void * lib;

    void (*vvod_ms)(int*B, int n);
    void (*vvod_mt)(int*B, int n);
    void (*fun_ms)(int* B, int n);
    void (*fun_mt)(int* B, int n);
    void (*vivod_ms)(int*B, int n);
    void (*vivod_mt)(int*B, int a, int b);

    int n=35, A[n];
    int a=5, b=7, D[a][b];

    lib = LoadLibrary(s); //загрузка библиотеки в память;
    if (!lib) {
        printf("cannot open library '%s'\n", s);
        return;
    }
    /*
    fun = (void (*)(void))GetProcAddress((HINSTANCE)lib, "func"); //получение указателя на функцию из библиотеки;
    if (fun == NULL) {
        printf("cannot load function func\n");
    }
    else {
        fun();
    }*/

    vvod_ms = (void (*)(int*, int))GetProcAddress((HINSTANCE)lib, "vvod_ms"); //получение указателя на функцию из библиотеки;
    if (vvod_ms == NULL) {
        printf("cannot load function vvod_ms\n");
    }
    else {
        vvod_ms(A, n);
    }

    vvod_mt = (void (*)(int*, int))GetProcAddress((HINSTANCE)lib, "vvod_mt"); //получение указателя на функцию из библиотеки;
    if (vvod_mt == NULL) {
        printf("cannot load function vvod_mt\n");
    }
    else {
        vvod_mt(D, a*b);
    }

    fun_ms = (void (*)(int*, int))GetProcAddress((HINSTANCE)lib, "fun_ms"); //получение указателя на функцию из библиотеки;
    if (fun_ms == NULL) {
        printf("cannot load function fun_ms\n");
    }
    else {
        fun_ms(A, n);
    }

    fun_mt = (void (*)(int*, int))GetProcAddress((HINSTANCE)lib, "fun_mt"); //получение указателя на функцию из библиотеки;
    if (fun_mt == NULL) {
        printf("cannot load function fun_mt\n");
    }
    else {
        fun_mt(D, a*b);
    }

    vivod_ms = (void (*)(int*, int))GetProcAddress((HINSTANCE)lib, "vivod_ms"); //получение указателя на функцию из библиотеки;
    if (vivod_ms == NULL) {
        printf("cannot load function vivod_ms\n");
    }
    else {
        vivod_ms(A, n);
    }

    vivod_mt = (void (*)(int*, int))GetProcAddress((HINSTANCE)lib, "vivod_mt"); //получение указателя на функцию из библиотеки;
    if (vivod_mt == NULL) {
        printf("cannot load function vivod_mt\n");
    }
    else {
        vivod_mt(D, a, b);
    }

    FreeLibrary((HINSTANCE)lib); //выгрузка библиотеки;
}
