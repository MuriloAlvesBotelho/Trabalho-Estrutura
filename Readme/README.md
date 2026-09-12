# Trabalho de Estrutura de dados

feito pelos alunos:

Murilo Alves Botelho

Gustavo Nogueira 

Isaac Ferreira Santos

# O que e Notação Big-O?

A Notacao Big-O e uma ferramenta matematica de analise assintotica usada para estimar a eficiencia de algoritmos em termos de tempo de execucao e consumo de memoria a medida que o volume de dados cresce. Em vez de medir o tempo em segundos, que varia conforme o hardware, ela mensura o crescimento do numero de operacoes logicas em funcao do tamanho da entrada n. A letra O vem de Order of, ou ordem de grandeza, indicando um teto assintotico ou limite superior para o pior caso da aplicacao.  

As 7 principais classes de complexidade sao:  

O(1) - Tempo Constante: O tempo de execucao nao depende da quantidade de dados. Seja com 10 ou 1.000.000 de itens, o custo operacional e fixo, como ao acessar o primeiro no pelo ponteiro de inicio.

O(1) - Tempo Constante: O tempo de execucao nao depende da quantidade de dados. Seja com 10 ou 1.000.000 de itens, o custo operacional e fixo, como ao acessar o primeiro no pelo ponteiro de inicio.  

O(log n) - Logaritmica: O algoritmo reduz o espaco de busca pela metade a cada passo atraves de uma condicao, como em uma busca binaria.  

O(n) - Linear: O tempo de execucao cresce em proporcao direta a quantidade de elementos. Se houver 10.000 itens, o algoritmo precisara percorrer ate 10.000 nos, como na busca linear por nome ou na contagem total de produtos.  

O(n log n) - Linearitmica: Combina a divisao de problemas pela metade com o processamento de n elementos em cada subdivisao, tipico de algoritmos eficientes de ordenacao como MergeSort.  

O(n^2) - Quadratica: O volume de passos cresce proporcionalmente a n vezes n. Para cada elemento avaliado, o algoritmo percorre a lista inteira novamente, como em lacos aninhados ou BubbleSort.  

O(2^n) - Exponencial: A cada novo elemento inserido na entrada, o numero total de operacoes dobra, como em algoritmos recursivos de forca bruta.>  

O(n!) - Fatorial: A mais custosa das classes. O numero de instrucoes e multiplicado pelo valor de cada nova entrada, como na busca exaustiva de permutacoes no problema do Caixeiro-Viajante

Hierarquia de Eficiencia (da mais eficiente para a menos eficiente):
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n) < O(n!)

# Definicao Formal e Fundamentacao Matematica:

Na analise de algoritmos, a Notacao Big-O descreve o comportamento limite de uma funcao quando o argumento tende ao infinito. Formalmente, dizemos que uma funcao f(n), que representa o custo computacional real do algoritmo, e de ordem g(n), denotado por f(n) = O(g(n)), se e somente se:  Existem constantes reais positivas c e n0 tais que 0 <= f(n) <= c * g(n), para todo n >= n0.  Essa definicao estabelece tres condicoes centrais:

Limite Assintotico Superior (Teto): A expressao c * g(n) atua como uma barreira que f(n) nunca ultrapassara para entradas suficientemente grandes. A notacao nao busca a curva exata, mas garante que, no pior cenario, a taxa de crescimento nao excedera a proporcao de g(n).  

O ponto de corte n0: Pequenos volumes de dados sao irrelevantes na analise assintotica. Um algoritmo quadrático pode executar mais rapido que um linear se n for igual a 2, devido ao custo de inicializacao da maquina. O valor n0 define o ponto a partir do qual a estrutura assintotica domina o custo real.  

A constante multiplicativa c: A constante absorve diferencas fisicas de hardware (frequencia de processador, otimizacoes do compilador gcc, velocidade de barramento de memoria). A analise foca na quantidade de operacoes fundamentais, nao em microssegundos.

Hierarquia de Eficiencia (da melhor para a pior):
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(2^n) < O(n!)  

Detalhamento Comparativo da Hierarquia:

O(1) - Constante: E a classe ideal. O numero de operacoes necessarias para concluir a tarefa nao possui nenhuma correlacao com o tamanho do estoque n. A operacao e executada de maneira pontual atraves de enderecamento direto na memoria.  

O(log n) - Logaritmica: Segunda mais eficiente. A cada etapa, o algoritmo reduz o espaco de busca por uma razao constante (geralmente a metade). Enquanto a entrada n cresce de forma exponencial, o tempo computacional cresce de maneira estritamente linear. Para um milhao de itens, necessita de apenas cerca de 20 operacoes fundamentais.  

O(n) - Linear: Representa algoritmos onde cada elemento do conjunto deve ser inspecionado pelo menos uma vez. Existe uma relacao estrita de proporcionalidade direta: dobrar o volume de produtos dobra o tempo de execucao. E a classe minima aceitavel para buscas em estruturas lineares nao ordenadas.  

O(n log n) - Linearitmica: E a menor complexidade possivel para algoritmos de ordenacao baseados em comparacao direta entre chaves no pior caso (como MergeSort). Ela surge quando dividimos recursivamente o problema em niveis logaritmicos e realizamos uma varredura linear de n elementos para recombinar as partes.  

O(n^2) - Quadratica: Marca o inicio dos algoritmos ineficientes para grandes massas de dados. Geralmente resulta de lacos de repeticao aninhados, onde para cada elemento avaliado e necessario percorrer todos os demais. Enquanto 1.000 itens requerem 1.000.000 de passos, 10.000 itens escalam para 100.000.000 de operacoes, tornando o processamento custoso.  

O(2^n) - Exponencial: Caracteriza problemas tipicos de combinatoria e forca bruta ingênua. Adicionar apenas uma unidade ao tamanho n faz com que a quantidade total de processamento seja multiplicada por dois. Torna-se inviavel para valores de n superiores a poucas dezenas.  

O(n!) - Fatorial: E a pior classe tratada na ciencia da computacao, pertencente a problemas que tentam avaliar todas as permutacoes possiveis de um arranjo. Um conjunto de entrada com tamanho n = 20 ja gera mais de 2 quintilhoes de operacoes, sendo impossivel de calcular em tempo aceitavel em qualquer computador convencional.  