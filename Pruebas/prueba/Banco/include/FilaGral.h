#ifndef FILAGRAL_H
#define FILAGRAL_H
#include"Cliente.h"


class FilaGral
{
    public:
        FilaGral();
        ~FilaGral();
        void atenderCliente();
        void reordenar();
        void crearFila();

    private:
        struct nodoCliente{
            //Cliente<T> cliente;
            nodoCliente *sigCliente;
        }; nodoCliente *primero,*ultimo;
};

#endif // FILAGRAL_H
