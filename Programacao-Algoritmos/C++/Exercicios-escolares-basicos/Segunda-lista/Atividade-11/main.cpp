/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:07/06/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 	Ler 10 números em um vetor.
	Substituir números negativos por zero.
	Exibir o vetor.
 */
 #include <iostream>
using namespace std;

int main(int argc, char** argv) {
	//Array
	int numeros[10];
	
	//Entrada dos numeros
	for(int i = 0; i < 10; i++){
		cout << "\nNumero " << i+1 << ": ";
		cin >> numeros[i];
	}
	
	//Substituição dos números negativos por 0
	for(int i = 0; i < 10; i++){
		if (numeros[i] < 0){
			numeros[i] = 0;
		}
		
	}
	//Saida dos numeros
	cout << "\nRESULTADO: " << endl;
	
	for(int i = 0; i < 10; i++){
		cout << "Numero " << i+1 << ": " << numeros[i] << endl;
	}
	return 0;
}
