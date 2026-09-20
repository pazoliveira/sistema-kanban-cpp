#include "dominios.hpp"


bool Codigo::Validar(int v){
    if (v > LIMITE_MAX || valor < LIMITE_MIN)
        throw invalid_argument("Codigo invalido! Deve ser um numero entre 1 e 25.");
    return true;
}

void Codigo::setValor(int v) {
    if (Validar(v)) {
    this->valor = v;
    }
}

bool Prioridade::Validar(int v){
    if (v == ERRO){
        throw invalid_argument("Codigo invalido! Deve ser um numero inteiro diferente de 0.");
    }
    return true;
}

void Prioridade::setValor(int v) {
    if (Validar(v)){
        this->valor = valor;
    }
}


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
