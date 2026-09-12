#include "simples.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menubase(){
    printf("1. Inserir no início\n"); 
    printf("2. Inserir no fim.\n");
    printf("3. Remover do início\n");
    printf("4. Remover do fim.\n");
    printf("5. Buscar produto por substring no nome (exibe todos que contêm).\n");
    printf("6. Atualizar quantidade de um produto (por ID).\n");
    printf("7. Exibir todos os produtos (ID, nome, quantidade, preço).\n");
    printf("8. Exibir reverso (apenas para a lista dupla).\n");
    printf("9. Contar quantos produtos há na lista.\n");
    printf("10. Esvaziar completamente a lista (liberar memória).\n");
    printf("0. sair do menu de perecíveis.\n>>");
}

typedef struct{
    int id;
    char nome[50];
    int quantidade;
    float preco;
}produto;


int inserirnoinicio(int id){
    produto add;
    add.id = id;
    printf("\nInsira o nome do produto:\n>>");
    if(fgets(add.nome, sizeof(add.nome), stdin) == NULL) return -1;
    add.nome[strcspn(add.nome, "\n")] = '\0';

    printf("Insira a quantidade:\n>>");
    if(scanf("%d", &add.quantidade) != 1) return -1;
    printf("Insira o preco:\n>>");
    if(scanf("%f", &add.preco) != 1) return -1;
    /* consume remaining newline after scanf to keep stdin consistent */
    int c; while ((c = getchar()) != '\n' && c != EOF) {}

    printf("Produto inserido: ID=%d, Nome=%s, Quantidade=%d, Preco=%.2f\n",
           add.id, add.nome, add.quantidade, add.preco);
    return 0;
}