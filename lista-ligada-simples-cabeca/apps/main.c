#include "../include/lista_ligada_cabeca.h"
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 

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
            printf("Informe o dado que deseja inserir: ");
            scanf("%d", &dados);
            adicionar_final(lista, dados);
            break;
        case 2:
            printf("Informe o dado que deseja inserir: ");
            scanf("%d", &dados);
            //adicionar_inicio(lista, dados);
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