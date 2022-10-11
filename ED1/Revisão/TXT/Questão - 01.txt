#include <stdlib.h>
#include <stdio.h>

/*
    Esse Programa lê um vetor (fornecido pelo usuário) de tamanho 10 de número inteiros.
    =============================================================================================
    Tentei "Esconder" ao máximo e seguir o TAD que vimos ontem em aula (06/10), mas como tempo e habilidade não são tão boas, fiz o que consegui. 
    Alguns códigos estão com "minha cara" outros adaptei de fóruns, creio que tudo funciona.
    Passei um tempo querendo melhorar a função de valores que se repetem, mas não consegui.
*/
int imprimirVetor(int N, int vet[]) // Função para imprimir o vetor
{
    for (int i = 0; i < N; i++)
    {
        printf("vet [%d] = %d \n", i, vet[i]);
    }
}

int maior(int M, int N, int vet[]) // Função para Verificar qual é o maior valor do Vetor
{
    for (int i = 0; i < N; i++)
    {
        if (M < vet[i])
        {
            M = vet[i];
        }
    }
    printf("%d \n", M);
}

int maiores(int M, int M2, int N, int vet[]) // Função para verificar quais são os dois maiores
{
    {
        for (int i = 0; i < N; i++)
        {
            if (vet[i] > M) // Se Valor for maior que a variável M, entramos no "if"
            {
                if (M > M2) // Se M(maior)é maior que M2(2a maior)
                {
                    M2 = M; //(M2) e M serão a mesma variável
                }
                M = vet[i]; // Se o Valor é maior que M, não mais
            }
            if (vet[i] > M2 && vet[i] != M) // Caso o programa não entre no "if acima", entrará aqui
            {
                M2 = vet[i]; // E atribuiá um valor que seja maior que M2 e diferente de M
            }
        }
        printf("%d e %d \n", M, M2);
    }
}

int media(int M, int M2, int N, int vet[]) // Aqui M e M2 serão variável auxiliares para calcular a média
{
    for (int i = 0; i < N; i++)
    {
        M = vet[i];
        M2 = M2 + M;
    }
    M2 = M2 / N;

    printf("%d\n", M2);
}

int verifica(int N, int vet[]) // Aqui M será uma variável para verificar se há números iguais
{
    for (int i = 0; i < N; i++) // Laço para ler uma posição do vetor
    {
        for (int j = i + 1; j < N; j++) // Lao para ler a posição seguinte do Vetor
        {
            if (vet[j] == vet[i]) // Comparação entre a posição i e j
            {
                printf("%d\n", vet[i]); // caso encontre um valor igual, a funcao imprime.
            }
        }
    }
}

int inverter(int N, int vet[]) // Função feita para inverter a impressão do vetor
{
    for (int i = N - 1; i >= 0; i--) // N -1 para o índice começar no "lugar certo" e i<=0 para imprimir, incluindo o valor da posição 0
    {
        printf("vet [%d] = %d \n", i, vet[i]);
    }
    printf("\n");
}
int impares(int N, int M, int vet[]) //Função feita para contar números ímpares
{
    for (int i = 0; i < N; i++)
    {
        if (vet[i] % 2 != 0) // Caso o resto da divisão seja diferente de 0, o número é ímpar.
        {
            M++;
        }
    }
    printf("%d\n", M);
}

int main()
{
    int N = 10;
    //printf("Digite o valor de N: \n");scanf("%d", &N); essa linha foi usada para teste. Caso queira mais que somente um vetor de 10, ou menos, só alterar o valor de N

    int vet[N];
    for (int i = 0; i < N; i++)
    {
        printf("%dº número: ", i + 1);scanf(" %d", &vet[i]);
    }
    // Chamando função de impressão de Vetor:
    printf("=========================\nImprimindo seu Vetor:\n");
    imprimirVetor(N, vet);
    // Definindo M (variável auxiliar) e definindo o Maior Vetor:
    printf("=========================\nMaior Valor: ");
    int M = 0;
    maior(M, N, vet);
    // Definindo os dois maiores valores do arrey (M2 uma variável auxiliar 'M2')
    printf("=========================\nMaiores Valores: ");
    int M2 = 0;
    maiores(M, M2, N, vet);
    // Calculando a Média dos valores do Vetor:
    printf("=========================\nMédia dos valores: ");
    media(M, M2, N, vet);
    // Verificando os valores repetidos:
    printf("=========================\nO(s) seguinte(s) valor(es) se repete(m):\n");
    verifica(N, vet);
    printf("=========================\nVetor Invertido:\n");
    // Imprime os valores do Valores invertidos.
    inverter(N, vet);
    // Imprime o número de numeros ímpares:
    printf("=========================\nQuantidade de números ímpares: ");
    impares(N, M, vet);

    return 0;
}