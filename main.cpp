
/*
Exercício 2 do laboratório
#include <iostream>
#include "entidades.hpp"

using namespace std;

int main() {
    Codigo cdg;
    Prioridade prd;
    int entrada1;
    int entrada2;

    cout << "Digite um codigo entre 0 e 25: ";
    cin >> entrada1;

    cout << "Digite uma prioridade diferente de 0: ";
    cin >> entrada2;

    if (cdg.setValor(entrada1) == false) {
        cout << "Errou no codigo!" << endl;
    }

    if (prd.setValor(entrada2) == false) {
        cout << "Errou na prioridade!" << endl;
    }

    Projeto pjo;

    pjo.setCodigo(cdg);
    pjo.setPrioridade(prd);

    cout << "Codigo salvo no projeto: " << pjo.getCodigo().getValor() << endl;
    cout << "Prioridade salva no projeto: " << pjo.getPrioridade().getValor() << endl;

    return 0;
}

*/

/*

#include <iostream>
#include "dominios.hpp"
using namespace std;

// Código feito com alocação dinâmica
int main(){
    CodigoCliente* ptr;

    ptr = new CodigoCliente();

    int entrada;

    cout << "Escreva ai um número de 0 a 5";+
    cin >> entrada;

    if (ptr->setValor(entrada)){
        cout << "Deu bom!" << ptr->getValor();
    } else {
        cout << "Deu ruim, faz de novo!";
    }
    delete(ptr);
    return 0;
}
*/



// Código feito com alocação estática
/*

#include <iostream>
#include "dominios.hpp"
using namespace std;

    int main() {
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
/*
*/
