#include <iostream>
#include <fila.h>

using namespace std;

fila::fila() {
    int tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

fila::~fila(){
    delete [] estrutura;
}

bool fila::estavazio(){

}

bool fila::estacheio(){

}

void fila::inserir(TipoItem item){

}

TipoItem fila::remover(){

}









