#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[40];
};
typedef struct hash Hash;

int hashingDivisao(int chave, int TABLE_SIZE);
int sondagemLinear(int pos, int i, int TABLE_SIZE);

Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha);

int insereHash_EnderAberto(Hash* ha, struct aluno al);
int buscaHash_EnderAberto(Hash* ha, int mat);
void removerHash(Hash* ha, int mat);

void imprimirTabela(Hash* ha);