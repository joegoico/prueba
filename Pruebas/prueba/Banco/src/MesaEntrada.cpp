#include "MesaEntrada.h"

template<typename T>MesaEntrada<T>::MesaEntrada(T p){
    primero->cliente=p;
    primero->Mayores=nullptr;
    primero->menores=nullptr;
}
template<typename T>void MesaEntrada<T>::agregarCliente(){

}
//MesaEntrada::~MesaEntrada()
//{
//    //dtor
//}
