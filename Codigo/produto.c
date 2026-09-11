int menuPerecivel(){
    printf("===== GERENCIAR PERECÍVEIS =====\n");
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
    printf("0. sair do menu de perecíveis.\n");
    int escolha;
    scanf("%d",&escolha);
    return escolha;
}

void InserirNoInicioPerecivel(struct produto*){
    produto add;
}





int menuNaoPerecivel(){
    printf("===== GERENCIAR NÃO PERECÍVEIS =====\n");
    printf("1. Inserir no início.\n");
    printf("2. Remover do fim.\n");
    printf("3. Buscar produto por substring no nome (exibe todos que contêm).\n");
    printf("4. Atualizar quantidade de um produto (por ID).\n");
    printf("5. Exibir todos os produtos (ID, nome, quantidade, preço).\n");
    printf("6. Exibir reverso (apenas para a lista dupla).\n");
    printf("7. Contar quantos produtos há na lista.\n");
    printf("8. Esvaziar completamente a lista (liberar memória).\n");
    printf("9. sair do menu de nao perecíveis.\n");
    int escolha;
    scanf("%d",&escolha);
    return escolha;
}