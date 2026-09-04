#include <iostream>
#include "dominios.hpp"
using namespace std;

// Código feito com alocação dinâmica
int main(){
    CodigoCliente* ptr;

    ptr = new CodigoCliente();

    int entrada;

    cout << "Escreva ai um número de 0 a 5";
    cin >> entrada;

    if (ptr->setValor(entrada)){
        cout << "Deu bom!" << ptr->getValor();
    } else {
        cout << "Deu ruim, faz de novo!";
    }
    delete(ptr);
    return 0;
}

// Código feito com alocação estática
/* int main() {
    CodigoCliente objeto;
    int entrada;
    cout << "Diga um número de 0 até 5";
    cin >> entrada;

    if(objeto.setValor(entrada)){
        cout << "Deu bom" << objeto.getValor() << end1;
    } else {
        cout << "Errou, tenta de novo" << end1;
    }
    return 0;

}
*/


