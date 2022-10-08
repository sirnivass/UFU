#include <stdlib.h>
#include <stdio.h>

/*
    Esse programa cria duas matrizes de inteiros. Cada matriz deve ter, nomáximo, cinco linhas e cinco colunas. Em seguida, implemente uma função quecalcule a multiplicação dessas duas matrizes, imprimindo o resultado. A funçãodeve verificar se é possível calcular a multiplicação. Teste seu programa com váriasmatrizes diferentes
*/

int main()
{
    // Declarando variáveis:
    int l1, l2, c1, c2, l3, c3, mat1[l1][c1], mat2[l2][c2], mat3[l3][c3];
    printf("Defina quantas linhas a primeira matriz: ");scanf("%d", &l1);
    printf("Defina quantas colunas a primeira matriz: ");scanf("%d", &c1);
    printf("Defina quantas linhas a primeira matriz: ");scanf("%d", &l2);
    printf("Defina quantas linhas a primeira matriz: ");scanf("%d", &c2);
    // Verificando se é possível multiplicar as matrizes.
    if (c1 == l2)
    {
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Informe o valor da [%d] Linha e da [%d] Coluna da Matriz 01: ", i + 1, j + 1);scanf("%d", &mat1[i][j]);
            }
        }
        printf("\n");        
        for (int i = 0; i < l2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Informe o valor da [%d] Linha e da [%d] Coluna da Matriz 02: ", i + 1, j + 1);scanf("%d", &mat2[i][j]);
            }

        }
        // Imprime as matrizes definidas
        printf("mat1: \n\n");
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", mat1[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        printf("mat2: \n\n");
        for (int i = 0; i < l2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", mat2[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        printf("Produto das Matrizes:\n");// Resultado da Multiplicação

        //Eu não sei o que fiz errado, infelizmente não consigo ver, meu tempo acabou...
        //Mas fica aqui o relato, eu tentei. mesmo com os 2 modos, errei na hora de multiplicar, sei a lógica,
        //Sei que devo criar uma 3a matriz, multiplicar linha com coluna da mat1 e mat2, mas não sei pq não sai...
        //Enfim... tentei.
         int aux = 0;
         for(int i = 0; i < l1; i++){
            for(int j = 0; j < c2; j++){
               mat3[i][j] = 0;
               for(int z = 0; z < c1; z++){
                  
                  aux = mat3[i][j] + (mat1[i][z] * mat2[z][j]);
               }
               mat3[i][j] = aux; 
               aux = 0;
            }
         }
        /*

        Tentei implementar esse modo que vi na internet, mas não consegui, algo sai errado...
        
        int aux = 0, x = 0;
        for (int i = 0; i < l1; i++){
            for (int j = 0; j < c2; j++){

                mat3[i][j] = 0;
                for (x = 0; x < c1; x++){
                    aux += mat1[i][x] * mat2[x][j];
                }
                mat3[i][j] = aux;
                aux = 0;
            }
        }
        */
        //Após o cálculo, vamos imprimir a mat3, a matriz que contém a multiplicação e somas de cada linha e coluna.
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("\nERRO!\n Impossível multiplicar.\n\nFechando Programa...\n");
    }

    return 0;
}