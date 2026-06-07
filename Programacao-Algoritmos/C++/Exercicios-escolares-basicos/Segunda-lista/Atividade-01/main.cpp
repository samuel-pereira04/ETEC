/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:21/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
  Descrição: Ler um número inteiro.
	Exibir a soma dos números ímpares até o número lido.
	Criar uma função que retorne verdadeiro para números ímpares.
 */
#include <iostream>
using namespace std;
//Função para verificar se o número é impar
bool impar(int n) {
    return n % 2 != 0;
}

int main() {
//Variáveis//	
	int soma_impar = 0;
	int num;

	cout << "Insira um numero: ";
	cin >> num;
	
	//Estrutura de repetição
	for (int i = 0; i <= num; i++){
		//Verificar se o número é ímpar
	    if (impar(i)) {
	        soma_impar = soma_impar + i;
	   }
	}
	//Resultado
	cout << "\nRESULTADO:";
    cout << "\nSoma dos numeros impares: " << soma_impar;
    
	   return 0;
}
