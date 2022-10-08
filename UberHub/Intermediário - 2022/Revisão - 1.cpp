/*
Farei aqui uma Revisão de C++ e comparação com C.
Meu objetivo é me familiarizar com essas linguagens e suas diferenças.
Note a extensão do arquivo ".cpp"
*/
#include<bits/stdc++.h> //Essa biblioteca possui "dentro dela", a <stdio.h>, a <stdlib.h> 
//e a <math.h>. Usa-lá é uma mão na roda.

using namespace std; //Sub área da biblioteca (acesso o material do UberHub para entender)

int main(){ //Nossa já velha conhecida função main(){
    
    //Variáveis:
    
    int x, y; //Variáveis são declaradas da mesma forma.

    //printf e cout:
    printf("Sim, printf também funciona aqui, na verdade tudo em C, funciona em C++ \n");//famoso!
    cout << "Essa é a forma do printf" << endl; //endl é o mesmo que '\n'.
    
    //scanf e cin:
    //para declarar as variáveis em C usamos o scanf, C++ conta com uma função. 'cin' 
    //bem mais prática.
    
    //Imprimindo com cout:
    cout << "Digite um valor para X e Y" << endl;
    scanf("%d %d", &x, &y); // não esqueça do '&', eu vivo esquecendo...
    //Imprimindo com printf e cout:
    printf("X: %d Y: \n", x, y);
    cout << "X: " << x << " Y: " << y << "\n"; //IMPORTANTE!!!! Entre uma 'coisa' e 'outra' use: '<<'

    //Agora usaremos o cin   
    cout << "Digite um valor para X e Y" << endl;
    cin >> x >> y; //Só isso mesmo, sem '%' ou algo parecido, Só não esqueça do '>>' entre as variáveis.
    //Imprimindo:
    cout << "A soma é: " << x + y << "\n"; //Sim, podemos fazer operações aqui mesmo dentro da cin.
    cout << "Por enquanto é somente isso. Vou criar outros programas para não ficar grande." << endl;
}