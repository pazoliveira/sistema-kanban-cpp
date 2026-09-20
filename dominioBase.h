#ifndef DOMINIOBASE_H_INCLUDED
#define DOMINIOBASE_H_INCLUDED
template <typename T>

class DominioBase {

protected:
    T valor;
    virtual void Validar(T v) = 0;

    public:
        T getValor(){
        return valor;
    }
    void setValor(T v){
    Validar();
    this->valor = v;
    }

    virtual ~DominioBase() {}
};


#endif // DOMINIOBASE_H_INCLUDED
