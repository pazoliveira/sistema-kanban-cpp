#include "dominios.hpp"

using namespace std

class Projeto {
    private:
        Codigo codigo;
        Prioridade prioridade;
    public:
        void setCodigo(Codigo);
        void setPrioridade(Prioridade);
        Codigo getCodigo();
        Prioridade getPrioridade();
};

inline void Projeto::setCodigo(Codigo codigo){
    this->codigo = codigo;
}
inline void Projeto::setPrioridade(Prioridade prioridade){
    this->prioridade = prioridade;
}
inline Codigo Projeto::getCodigo(){
    return valor;
}
inline Prioridade Projeto::getPrioridade(){
    return valor;



int main(){

return 0;

}
