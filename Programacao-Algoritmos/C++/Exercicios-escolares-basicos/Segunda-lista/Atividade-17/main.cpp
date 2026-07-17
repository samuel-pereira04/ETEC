/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:08/06/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 	Ler 10 números em um vetor.
	Criar outro vetor com os sinais invertidos.
	Exibir a soma dos valores positivos dos dois vetores.
 */
 
 #include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num[10]; //Vetor dos numeros
	int numneg[10]; //Vetror dos numeros negativos
	int soma = 0 ; //Variável para somar os numeros positivos do primeiro vetor
	int somaneg = 0 ; //Variável para somar os numeros positivos do segundo vetor
	int somatotal; //Variavel para somar os dois vetores

	
	//Entrada de valores
	cout << "Insira os numeros: " << endl;
	for(int i = 0; i < 10; i++){
		cin >> num[i];
	}
	
	
	//Saída dos valores negativos
	cout << "\nNumero com sinais invertidos: " << endl;
	for(int i = 0; i < 10; i++){
		numneg[i] = num[i] * (-1);
		cout << numneg[i] << endl;
	}
	
	
	//Soma dos valores positivos do vetor principal
	cout << "\nSoma dos positivos do vetor principal: " << endl;
	for(int i = 0; i < 10; i++){
		//Verificar se o numero eh positivo
		if(num[i] > 0){
			soma = soma + num[i];
			cout << num[i] << " + ";
		}
	}
		cout << "\nSoma do vetor principal: " << soma << endl;
		
	//Soma dos valores positivos do vetor negativo
	cout << "\nSoma dos positivos do vetor negativo: " << endl;
	for(int i = 0; i < 10; i++){
		//Verificar se o numero eh positivo
		if(numneg[i] > 0){
			somaneg = somaneg + numneg[i];
			cout << numneg[i] << " + ";
		}
	}
		cout << "\nSoma do vetor negativo: " << somaneg << endl;
		
	//Soma dos dois vetores
	somatotal = soma + somaneg;
	cout << "\nSoma Total: " << somatotal;
	return 0;
}
