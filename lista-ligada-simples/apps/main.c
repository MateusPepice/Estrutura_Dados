#include "../include/lista_ligada.h"
#include<stdio.h>
#include<stdlib.h>

int main (){
    int escolha;
    int dados;

    No *lista = criar_lista();

    printf("-----MENU DE OPÇÕES-----");
    printf("1 - Adicionar final");
    printf("2 - Adicionar comeco");
    printf("3 - Remover final");
    printf("4 - Remover inicio");
    printf("5 - Imprimir lista");
    printf("6 - Buscar por valor");
    printf("7 - Buscar por posicao");
    printf("8 - Destruir lista");
    printf("0 - Sair do programa");
    scanf("%d", &escolha);


    switch(escolha){
        case 1:
            
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida!!");
            break;
    }
}