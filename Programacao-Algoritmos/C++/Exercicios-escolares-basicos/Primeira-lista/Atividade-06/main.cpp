/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:21/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos.

 */
#include <iostream>
using namespace std;
int main() {
//Variáveis//	
	float num ;
	float soma = 0;
	float mult = 1;

	
//Loop até a soma ultrapassar cem//		
	while(soma <= 100){
		cout<<"Digite um numero: ";
			cin>>num;
			soma = soma + num;
			mult = mult * num;
			
	}
//Mostrando o resultado após soma ultrapassar 100//
		cout<<"Resultado da soma: "<<soma;
		cout<<"\nResultado da multiplicacao: "<<mult;

    return 0;
}
