#include "dominios.hpp"
/*
bool CodigoCliente::Validar(int valor){
    if (valor > LIMITE)
        return false;
    return true;
}

bool CodigoCliente::setValor(int valor) {
    if (!Validar(valor))
        return false;
    this->valor = valor;
    return true;
}
*/
bool Codigo::Validar(int valor){
    if (valor > LIMITE)
        return false;
    return true;
}

bool Codigo::setValor(int valor) {
    if (!Validar(valor))
        return false;
    this->valor = valor;
    return true;
}

bool Prioridade::Validar(int valor){
    if (valor == ERRO)
        return false;
    return true;
}

bool Prioridade::setValor(int valor) {
    if (!Validar(valor))
        return false;
    this->valor = valor;
    return true;
}
