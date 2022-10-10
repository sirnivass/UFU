/*
Revisão - 2 VECTOR!
*/
#include <bits/stdc++.h> //Bibliotequinha bááááásica menines.

using namespace std; //Se ainda não sabe disso, vá aprender!

int main(){     
    //Vetores!
    //Em C:
    int vetC[3]; // Vamos declarar um vetor de valor fixo. 3 Pq sou preguiçosa.
    
    printf("Declarando Vetor em C:\n");
    //Declarando...
    for(int i = 0; i < 3; i++){ //declaração padrão, isso tbm não muda em C++:
      printf("Digite o [%d] número: ", i+1);scanf("%d", &vetC[i]);
    }
    //Imprimindo... 
    for(int i = 0; i < 3; i++){ //declaração padrão, isso tbm não muda em C++:
      printf("[%d] número: %d\n", i+1, vetC[i]);
    }
    //Até aqui tudo muito fácil.... Afinal, fizemos isso o 1º semestre todo. Bora ver como se faz em C++
    
    //Vetores!
    //Em C++
    //Para declarar: estrutura <tipo> nomeDoVetor
    //Para esse exemplo vou resolver o mesmo problema que resolvi acima 
    cout << "\nDeclarando Vetor em C++:" << endl;//Percebeu um \n ali né? pois é, podemos usar normalmente.
    vector <int> vetCpp; // É isso. tá declarado. 
    //Agora podemos tratar de inserir elementos de várias formas. 
    //a primeira delas será com a função push_back()
    //Essa impressão aqui dará o vetor de tamanho 0:
    cout << "Primeira impressão do Vetor: " << endl;
    for( int i = 0; i < vetCpp.size(); i++){
        cout << vetCpp[i] << " "; //Usei o " " para ficar mais legível.
    }
    //Adicionando valores no Vetor, lembrando que até aqui não adicionamos nada.
    vetCpp.push_back(10); // 1º valor dentro do vetor, esse valor ocupará a posição [0] do Vetor.
    //imprimindo...
    cout << "\nSegunda impressão do Vetor: " << endl;
    for( int i = 0; i < vetCpp.size(); i++){
        cout << vetCpp[i] << " ";
    }
    vetCpp.push_back(9); //Segundo elemento usando a função push_back() 
    //A cada push_back o vetor aumenta seu tamanho e não precisamos nos preocupar com isso. Veja abaixo:
    //Imprimindo....
    cout << "\nTerceira impressão do Vetor: " << endl;
    for( int i = 0; i < vetCpp.size(); i++){//Quando declato vetCpp.size(), não importa qual o tamanho do vetor.
        cout << vetCpp[i] << " ";
    }
    //Agora bora adicionar mais 5 valores, lembrando que é um vetor de inteiro, só aceita números.
    vetCpp.push_back(3);
    vetCpp.push_back(8);
    vetCpp.push_back(6);
    vetCpp.push_back(5);
    vetCpp.push_back(1);
    cout << "\nQuarta impressão do Vetor: " << endl;
    for( int i = 0; i < vetCpp.size(); i++){
        cout << vetCpp[i] << " ";
    }
    //Agora sabemos como inserir valores no vetor indefinidamente, sempre na última posição.
    //Continuando com esse vetor, podemos acessar qualquer posição dele a partir da função 'at':
    //Para tanto vamos conhecer a função 'at':
    //vetCpp.at(0); ==> Com esse exemplo acessamos nosso primeiro valor, o valor da posição 0
    
    cout << "\nAcessando as posições do Vetor:" << endl;
    cout << "O valor na posição 0 é: " << vetCpp.at(0) << endl;
    cout << "O valor na posição 1 é: " << vetCpp.at(1) << endl;
    cout << "O valor na posição 2 é: " << vetCpp.at(2) << endl;
    cout << "O valor na posição 3 é: " << vetCpp.at(3) << endl;

    //Lembra como era "charo" inverter o vetor?, pois bem, aqui temos uma função pronta para isso!
    //é a função 'reverse', mas para isso usamos "ponteiros", calma, é fácil, não chora. :'(
    //Ainda com o vetCpp vamos usar a função 'reverse' e mandar imprimir:

    reverse(vetCpp.begin(),vetCpp.end()); //Pronto! O vetor foi invertido! Simples assim, bora ver:
    cout << "Imprimindo vetor invertido: " << endl;
    //imprimindo...
    for( int i = 0; i < vetCpp.size(); i++){
        cout << vetCpp[i] << " ";
    }
    
    //Lembrando que aqui podemos, também, declarar o vetor já com seus valores.
    cout << "\nDeclarando um Vetor já com alguns Valores: " << endl;
    vector <int> vetCpp2 {20, 21, 22, 23, 24, 25}; //aqui já declaramos alguns valores.
    cout << "impressão do Vetor 2: " << endl;
    for( int i = 0; i < vetCpp2.size(); i++){ //Lembrando de declarar o tamano de vetCpp2!
        cout << vetCpp2[i] << " ";
    }
    vetCpp2.push_back(26);
    vetCpp2.push_back(27);
    vetCpp2.push_back(28);
    vetCpp2.push_back(29);
    vetCpp2.push_back(30);        
    cout << "\nimpressão do Vetor 2, após algumas inclusões: " << endl;
    for( int i = 0; i < vetCpp2.size(); i++){
        cout << vetCpp2[i] << " ";
    }

    //Na próxima Revisão continuaremos com Vetor.
}