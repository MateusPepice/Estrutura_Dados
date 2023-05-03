#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 

typedef struct no No;

No* criar_lista();

void adicionar_final(No *ptr_lista, int dados);
void adicionar_inicio(No *ptr_lista, int dados);

bool remover_final(No **ptr_lista);
bool remover_inicio(No **ptr_lista);

void buscar_valor(No *lista, int dados);
void buscar_posicao(No *lista, int posicao);

void destruir_lista(No **ptr_lista);

void imprimir_lista(No *ptr_lista);