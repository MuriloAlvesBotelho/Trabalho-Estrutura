#include <stdio.h>
int main() {
    int user;
    do {
        printf("===== ESTOQUE DA LOJA =====\n");
        printf("1. Gerenciar Perecíveis (Simples)\n");
        printf("2. Gerenciar Não Perecíveis (Dupla)\n");
        printf("3. Gerenciar Promoções (Circular)\n");
        printf("0. Sair\n>>");
        scanf("%d", &user);
        printf("\n");
        int subescolha;

        switch (user){
        case 1:
            subescolha = menuPerecivel();
            switch(subescolha){
                case 1:
                    
                    break;  
            }
            break;
        case 2:
            subescolha = menuNaoPerecivel();
            InserirNoInicioPerecivel();
            //codigo//
            break;
        case 3:
            printf("===== GERENCIAR PROMOÇÕES =====\n");
            printf("1. Inserir no início e no fim.\n");
            printf("2. Remover do início e do fim.\n");
            printf("3. Buscar produto por substring no nome (exibe todos que contêm).\n");
            printf("4. Atualizar quantidade de um produto (por ID).\n");
            printf("5. Exibir todos os produtos (ID, nome, quantidade, preço).\n");
            printf("6. Exibir reverso (apenas para a lista dupla).\n");
            printf("7. Contar quantos produtos há na lista.\n");
            printf("8. Esvaziar completamente a lista (liberar memória).\n");
            printf("9. sair do menu de perecíveis.\n");
            scanf("%d",&subescolha);
            
            //codigo//
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (user != 0);
    return 0;
}