#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

using namespace std;

class Projeto {
    private:
        Codigo codigo;
        Prioridade prioridade;
    public:
        void setCodigo(Codigo);
        void setPrioridade(Prioridade);
        int getCodigo();
        int getPrioridade();
};

inline void Projeto::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline void Projeto::setPrioridade(Prioridade prioridade){
    this->codigo = codigo;
}
inline int Projeto::getCodigo(){
    return valor;
}
inline int Projeto::getPrioridade(){
    return valor;
}


#endif // ENTIDADES_HPP_INCLUDED
