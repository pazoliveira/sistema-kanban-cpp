#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

class Codigo {
    private:
        static const int LIMITE_MAX = 25;
        static const int LIMITE_MIN = 1;
        int valor;
        void Validar(int v);
    public:
        int getValor();
        void setValor(int valor);

};

inline int Codigo::getValor(){
    return valor;
}

class Prioridade{
    private:
        static const int ERRO = 0;
        int valor;
        void Validar(int v);
    public:
        int getValor();
        void setValor(int v);
};

inline int Prioridade::getValor(){
    return valor;
}


#endif // DOMINIOS_HPP_INCLUDED
