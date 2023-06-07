#include <stdio.h>
#include <stdlib.h>
#include "../include/tabela_hash.h"

struct aluno inserir(){
    struct aluno novoAluno;
    printf("\nX-----INSERIR-----X");
    printf("\nMATRICULA:\n");
    scanf("%d", &novoAluno.matricula);
    printf("\nNOME.....:\n");
    fflush(stdin);
    gets(novoAluno.nome);
    return novoAluno;
}
int buscar(){
    int matricula;
    printf("\nX-----BUSCAR-----X");
    printf("\nMATRICULA:\n");
    scanf("%d", &matricula);
    return matricula;
}
void remover(int *matricula){
    printf("X-----REMOVER-----X");
    printf("\nMATRICULA:\n");
    scanf("%d", matricula);
}

int main (){

    int escolha = 0; 
    Hash* ha = criaHash(10);
    int resultado = 0;
    int matricula = 0;

    do {
        printf("\nX-----MENU PRINCIPAL-----X\n");
        printf("1 - INSERIR\n");
        printf("2 - BUSCAR\n");
        printf("3 - REMOVER\n");
        printf("4 - IMPRIMIR\n");
        printf("5 - DESTRUIR\n");
        printf("0 - SAIR\n");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                resultado = insereHash_EnderAberto(ha, inserir());
                resultado == 1 ? printf("\nINSERCAO REALIZADA.") : printf("\nFALHA NA INSERCAO!!!");
                break;
            case 2:
                buscaHash_EnderAberto(ha, buscar());
                break;
            case 3:
                remover(&matricula);
                removerHash(ha, matricula);
                break;
            case 4:
                imprimirTabela(ha);
                break;
            case 5:
                liberaHash(ha);
                printf("\nTABELA HASH DESTRUIDA!");
                break;
            case 0:
                printf("\nSAINDO DO SISTEMA!");
                break;
            default:
                printf("\nOPCAO INVALIDA!");
                break;
        }

    } while (escolha != 0);
}


