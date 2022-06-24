#include <iostream>
#include"MesaEntrada.h"
#include "Cliente.h"
using namespace std;

int main()
{
    CLIENTE persona("joe",20,60000,"deposito","puto",true);
    MesaEntrada<CLIENTE> Arbol(persona);
    return 0;
}
