#include "../include/lista_ligada.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

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

void adicionar_inicio(No **ptr_lista, int valor){

    No *novo_elemento = (No*) malloc(sizeof(No));
    if (novo_elemento == NULL) {
       perror("malloc");
       exit(EXIT_FAILURE);
    }

    novo_elemento->dados = dados;
    novo_elemento->ptr_proximo = *ptr_lista;

    *ptr_lista = novo_elemento;
}

bool remover_final(No **ptr_lista){

    No *ptr_auxiliar = *ptr_lista;
    No *ptr_anterior = NULL

    if(ptr_auxiliar == NULL){
        return false;
    }

    while(ptr_auxiliar->ptr_proximo != NULL){
        ptr_anterior = ptr_auxiliar;
        ptr_auxiliar->ptr_proximo = ptr_auxiliar->ptr_proximo;
    }
    ptr_anterior->ptr_proximo = NULL;
    free(ptr_auxiliar);
    return true;

}

bool remover_inicio(No **ptr_lista){

    No *ptr_auxiliar = ptr_lista;
    if(ptr_auxiliar == NULL){
        return false;
    }



}

void buscar_valor(){

}

void buscar_posicao(){

}

void destruir_lista(){

}

void imprimir_lista(No **ptr_lista){
    
    No *ptr_imprimir = *ptr_lista;

    while(ptr_imprimir->ptr_proximo != NULL){
        printf("%d -> ", ptr_imprimir->dados);
        ptr_imprimir->ptr_proximo = ptr_imprimir->ptr_proximo;
    }

}