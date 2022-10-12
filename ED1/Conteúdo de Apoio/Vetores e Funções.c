#include<stdio.h>

/*
 * vet[] é uma variável LOCAL, mesmo assim, nesse exemplo, ela passa ao vetor "x" da main
 * valores por referência. 
 * A importância disso, é que se na main() tenho um vetor de 100Mil, ao passar o valor por
 * referência, eu não preciso fazer uma cópia desse vetor, e sim referenciá-lo.
 * Por essse motivo, temos que passar o tamanho do vetor para nossa função, daí o "int tam" na "fun1"
 *  Entende-se como boa prática determinar o tamanho máximo do vetor nas funções
 * 
*/

void imprime (int vet[], int n){
   for(int i = 0; i < n; i++){
        printf("[%d]", vet[i]);
    }
}

void fun1 (int vet[], int tam){ 
    for (int i = 0; i < tam; i++){
        vet[i]=1;
    }
}

void soma_1( int vet[], int n){
    for (int i = 0; i < n; i++){
        vet[i]++;
    }

}

int main(){

    int x[10];

    for(int i = 0; i < 10; i++){
        x[i] = 0;
    }
    printf("Após 'zerar' o vetor 'x':\n");
    imprime(x, 10);
    //chamando a função 'fun1' e passando os valores por referência.
    fun1(x, 5);
    printf("\nAo chamar os valores por referência, note que o vetor da função alterou os valores de 'x'\n");    
    //Imprimindo x:
    imprime(x, 10);
    printf("\nAgora, chamando outra função, uma função para alterar os valores do vetor 'X'\n");
    //Declarando X:
    int X[5] = {1, 2, 3, 4, 5};
    //Imprimindo X, antes da soma_1:
    imprime(X, 5);
    //Aplicando soma_1:
    soma_1(X, 5);
    printf("\nApós a somar '+1': \n");
    //Imprimindo X após a soma_1:
    imprime(X, 5);

    return 0;
}
