#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
typedef struct tnodo *arbol;

struct tnodo
{
    int dato;
    arbol izquierda;
    arbol derecha;
};

void initT(arbol &arb)
{
    arb = NULL;
}

int main ()
{
    arbol tree;
    initT(a);
    return 0;
}
