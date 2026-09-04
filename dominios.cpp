#include "dominios.hpp"

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
