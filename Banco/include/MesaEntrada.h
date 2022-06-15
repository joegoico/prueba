#ifndef MESAENTRADA_H
#define MESAENTRADA_H
#include"Cliente.h"

class MesaEntrada
{
    public:
        MesaEntrada();
        //~MesaEntrada();
        void agregarCliente();
    private:
        struct Nodo{
            Cliente cliente;
            Nodo *menores;
            Nodo *Mayores;
        }; Nodo *primero;
};
MesaEntrada::MesaEntrada(){
    primero=NULL;
}
void MesaEntrada::agregarCliente(){
    Cliente CLIENTE("jose",20,20,"RETIRO","PERSONA",true);
    primero->cliente=CLIENTE;
    cout<<primero->cliente.destinatario;
}
#endif // MESAENTRADA_H
