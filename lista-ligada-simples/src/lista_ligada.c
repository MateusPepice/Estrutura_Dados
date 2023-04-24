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

void adicionar_final(No **ptr_lista, int dados){

    No *novo_elemento = (No*) malloc(sizeof(No));
    if (novo_elemento == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    novo_elemento->ptr_proximo = NULL;
    novo_elemento->dados = dados;

    No *ptr_auxiliar = *ptr_lista;
    while(ptr_auxiliar->ptr_proximo != NULL){
        ptr_auxiliar->ptr_proximo = ptr_auxiliar->ptr_proximo;
    }
    ptr_auxiliar->ptr_proximo = novo_elemento;

}

void adicionar_inicio(No *ptr_lista, int valor){

    No *novo_elemento = (No*) malloc(sizeof(No));
    if (novo_elemento == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    novo_elemento->dados = dados;
    novo_elemento->ptr_proximo = *ptr_lista;

    *ptr_lista = novo_elemento;
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

void imprimir_lista(){
    
}