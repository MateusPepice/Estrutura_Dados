#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/tabela_hash.h"

struct hash{
    int quantidade, TABLE_SIZE;
    struct aluno **itens;
};

int sondagemLinear(int pos, int i, int TABLE_SIZE){
    return ((pos + i) & 0x7FFFFFFF) % TABLE_SIZE;
}

int hashingDivisao(int chave, int TABLE_SIZE){
    return (chave & 0x7FFFFFFF) % TABLE_SIZE;
}

Hash* criaHash(int TABLE_SIZE){
    Hash* ha = (Hash*) malloc(sizeof(Hash));

    if(ha != NULL){
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct aluno**) malloc(TABLE_SIZE * sizeof(struct aluno**));
        if(ha->itens == NULL){
            free(ha);
            return NULL;
        }
        ha->quantidade = 0;
        for(i=0; i < ha->TABLE_SIZE; i++){
            ha->itens[i] = NULL;
        }
    }
    return ha;
}

void liberaHash(Hash* ha){
    if(ha != NULL){
        int i;
        for(i=0; i < ha->TABLE_SIZE; i++){
            if(ha->itens[i] != NULL){
                free(ha->itens[i]);
            }
        }
        free(ha->itens);
        free(ha);
    }
}

int insereHash_EnderAberto(Hash* ha, struct aluno al){
    if(ha == NULL || ha->quantidade == ha->TABLE_SIZE){
        return 0;
    }
    int chave = al.matricula;
    int i, pos, newPos;
    pos = hashingDivisao(chave, ha->TABLE_SIZE);
    for(i=0; i < ha->TABLE_SIZE; i++){
        newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        if(ha->itens[newPos] == NULL){
            struct aluno* novo;
            novo = (struct aluno*) malloc(sizeof(struct aluno));
            if(novo == NULL){
                return 0;
            }
            *novo = al;
            ha->itens[newPos] = novo;
            ha->quantidade++;
            return 1;
        }
    }
    return 0;
}

int buscaHash_EnderAberto(Hash* ha, int mat){
    if(ha == NULL){
        return 0;
    }
    int i, pos, newPos;
    pos = hashingDivisao(mat, ha->TABLE_SIZE);
    for(i=0; i < ha->TABLE_SIZE; i++){
        newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
        if(ha->itens[newPos] == NULL){
            printf("\nPOSICAO ENCONTRADA MAS VAZIA!\n");
            return 0;
        }
        if(ha->itens[newPos]->matricula == mat){
            printf("\nALUNO ENCONTRADO NA POSICAO %d\n", newPos);
            return newPos;
        }
    }
    return 0;
}

void imprimirTabela(Hash* ha){
    printf("\nX-----IMPRIMINDO-----X\n");
    for(int i=0; i < ha->TABLE_SIZE; i++){
        struct aluno *alunoAtual = ha->itens[i];

        if(alunoAtual != NULL){
            printf("%d - MATRICULA: %d ", i, alunoAtual->matricula);
            printf("-> NOME: %s\n", alunoAtual->nome);
        } else{
            printf("%d - NULL\n", i);
        }
    }
}

void removerHash(Hash* ha, int mat){
    int posicaoEncontrada;

    posicaoEncontrada = buscaHash_EnderAberto(ha, mat);

    if(posicaoEncontrada == 0) return;

    if(ha->itens[posicaoEncontrada]->matricula == mat){
        ha->itens[posicaoEncontrada] = NULL;
    }
}
