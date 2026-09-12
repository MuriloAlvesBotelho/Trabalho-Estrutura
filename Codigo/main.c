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
        int subescolha=0;

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
            //codigo//
            break;
        case 3:
            subescolha = menuPromocoes();
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