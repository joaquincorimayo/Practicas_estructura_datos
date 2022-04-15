#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
typedef struct tnodo *arbol;

struct tnodo
{
    int dat;
    arbol left;
    arbol right;
};

void initT(arbol &tree)
{
    tree = NULL;
}

void create_nodo(arbol &neww)
{
    neww = new tnodo;
    if (neww != NULL)
    {
        cout << "Ingrese numero: ";
        cin >> neww->dat;
        neww->left = NULL;
        neww->right = NULL;
    }
    else
    {
        cout << "Memoria llena" << endl;
    }
}

void insertA(arbol &a, arbol nuevo)
{
    if (a == NULL)
    {
        a = nuevo;
    }
    else
    {
        if (nuevo->dat < a->dat)
        {
            insertA(a->left, nuevo);
        }
        else
        {
            insertA(a->right, nuevo);
        }
    }
}

void preOrden(arbol a)
{
    if (a != NULL)
    {
        cout << a->dat << " ";
        preOrden(a->left);
        preOrden(a->right);
    }
}

int main ()
{
    arbol tree, anew;
    initT(tree);
    int ingreso = 1;
    while(ingreso <= 6)
    {
        create_nodo(anew);
        insertA(tree, anew);
        ingreso++;
    }

    cout << "DATOS EN PRE - ORDEN" << endl;
    preOrden(tree);

    return 0;
}
