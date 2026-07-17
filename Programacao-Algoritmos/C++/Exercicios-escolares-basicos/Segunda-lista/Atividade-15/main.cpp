/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:07/06/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 	Ler 20 números em um vetor.
	Exibir o índice do primeiro número negativo.
 */
 
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int numeros[20]; //Vetor
	int indicenegativo = -1; //Variavel que verifica o indice no primeiro numero negativo
	
	//Entrada dos numeros
	for(int i = 0; i < 20; i++){
		cout << "\nNumero " << i+1 << ": ";
			cin >> numeros[i];
	}
	
	//Ciclo de repeticao ate encontrar um numero negativo
	for(int i = 0; i < 20; i++){
			
			if(numeros[i] < 0){
				indicenegativo = i;
				
			
				
			break;
			}
	
	} 
	
	//Verifica se encontrou um numero negativo
	if(indicenegativo != -1){
		
		//Resultado do primeiro indice negativo
		cout << "\n\nRESULTADO" << endl;
			cout << "Indice do primeiro numero negativo: " << indicenegativo << endl;
			
	}
	
	else {
		
		//Resultado se não tiver nenhum número negativo
			cout << "Voce nao inseriu nenhum numero negativo" << endl;
			
	}

	return 0;
	
}

