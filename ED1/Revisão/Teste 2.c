#include <stdlib.h>
#include <stdio.h>


int main()
{
    int a, b;
    int *P1, *P2, **P3;
    float *P4;
    a = 10;

    b = a;
    P1 = &b;
    P3 = &P2; //Erro!
    b = 5;
    P2 = &b;


    return 0;
}