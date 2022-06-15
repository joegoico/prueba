#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
using namespace std;
template <typename T>
class Cliente
{
    private:
        string nombre, operacion, destinatario;
        int edad;
        int monto;
        bool esCliente;
    public:
        Cliente();
        Cliente(string , int , int , string , string , bool );
        //~Cliente();
        void imprimir();
};
template <typename T> Cliente::Cliente(string n, int e, int m, string op, string des, bool eC){
   this->nombre=n;
   this->edad=e;
   this->monto=m;
   this->operacion=op;
   this->destinatario=des;
   this->esCliente=eC;
}
template <typename T> void Cliente::imprimir(){
    cout<<this->esCliente;
}
#endif // CLIENTE_H
