#ifndef MESAENTRADA_H
#define MESAENTRADA_H
//#include "Cliente.h"
template <typename T>
class MesaEntrada
{
    public:
        MesaEntrada(T p);
        //~MesaEntrada();
        void agregarCliente();
        void moverFila();
    private:
        struct Nodo{
            T cliente;
            Nodo *menores;
            Nodo *Mayores;
        }; Nodo *primero;
};
#endif // MESAENTRADA_H
