#include "lista_ligada.h"
#include<stdlib.h>
#include<stdlib.h>

struct no {
    int dados;
    No *ptr_proximo;
}

No *criar_lista(){
    return NULL;
}

void adicionar_final(No *ptr_lista, int dados){
    No *novo_elemento = (No*) malloc(sizeof(No));
    novo_elemento->dados = dados;
}

void adicionar_inicio(){

}

void remover_final(){

}

void remover_inicio(){

}

void buscar_valor(){

}

void buscar_posicao(){

}

void destruir_lista(){

}