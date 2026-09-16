#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

using namespace std;

/*
class CodigoCliente {
    private:
        static const int LIMITE = 5;
        int valor;
        bool Validar(int);
    public:
        bool setValor(int);
        int getValor();

};
inline int CodigoCliente::getValor(){
    return valor;
}
*/

class Codigo {
    private:
        static const int LIMITE = 25;
        int valor;
        bool Validar();
    public:
        int getValor(int valor);
        void setValor(int valor);

};

inline Codigo::getValor(){
    return valor;
}

Class Prioridade{
    private:
        static const int ERRO = 0;
        int valor;
        bool Validar();
    public:
        int getValor(int valor);
        void setValor(int valor);
}

inline Prioridade::getValor(){
    return valor;
}


#endif // DOMINIOS_HPP_INCLUDED
