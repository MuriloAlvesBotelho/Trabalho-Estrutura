#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct produto{
    int id;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void menubase();
int menuPerecivel();
int menuNaoPerecivel();
int promocoes();
