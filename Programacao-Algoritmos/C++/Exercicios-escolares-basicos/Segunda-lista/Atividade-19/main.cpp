/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:11/06/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 	Ler 10 números.
	Separar:
	Pares em um vetor
	Ímpares em outro vetor
	Ordenar os dois vetores.
	Somar os elementos e armazenar em um terceiro vetor.
	Exibir todos os vetores.
 */
 
#include <iostream>
#include <algorithm>
using namespace std;




int main(int argc, char** argv) {
    int num[10];
    int numimp[10];
    int numpar[10];
    int numsoma[10];
    int qtdPar = 0, qtdImp = 0;

    cout << "Insira os numeros:" << endl;

    for(int i = 0; i < 10; i++) {
        cin >> num[i];
		
        if(num[i] % 2 == 0) {
            numpar[qtdPar++] = num[i];
            
        }
        else {
            numimp[qtdImp++] = num[i];
        }
    }

	// Ordenar os vetores
	sort(numpar, numpar + qtdPar);
	sort(numimp, numimp + qtdImp);
	
	// Somar os elementos
    int qtdSoma = min(qtdPar, qtdImp);

    for(int i = 0; i < qtdSoma; i++) {
        numsoma[i] = numpar[i] + numimp[i];
    }


	//Saída dos Vetores
    cout << "Numeros pares:" << endl;
    for(int i = 0; i < qtdPar; i++) {
        cout << numpar[i] << endl;
    }

    cout << "Numeros impares:" << endl;
    for(int i = 0; i < qtdImp; i++) {
        cout << numimp[i] << endl;
    }
    
    // Exibir vetor soma
    cout << "\n\nVetor soma:" << endl;
    for(int i = 0; i < qtdSoma; i++) {
        cout << numsoma[i] << endl;
    }

	
    return 0;
}
