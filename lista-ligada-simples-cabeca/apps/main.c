#include "../include/lista_ligada_cabeca.h"
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 

int main (){

    int escolha;
    int dados;

    No *lista = criar_lista();

    printf("\n-----MENU DE OPCOES-----\n");
    printf("1 - Adicionar final\n");
    printf("2 - Adicionar comeco\n");
    printf("3 - Remover final\n");
    printf("4 - Remover inicio\n");
    printf("5 - Imprimir lista\n");
    printf("6 - Buscar por valor\n");
    printf("7 - Buscar por posicao\n");
    printf("8 - Destruir lista\n");
    printf("0 - Sair do programa\n");
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
    printf("Você saiu do sistema!");
}