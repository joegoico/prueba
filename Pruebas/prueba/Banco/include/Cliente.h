#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
using namespace std;
class CLIENTE
{
    private:
        string nombre, operacion, destinatario;
        int edad;
        int monto;
        bool esCliente;
    public:
        CLIENTE(string nombre, int edad, int monto, string operacion, string destinatario, bool esCliente);
        //~Cliente();
        void imprimir();
};
#endif // CLIENTE_H
