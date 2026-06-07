#include <iostream>
/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:07/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler um número inteiro. Verificar e exibir se o número é primo.
 */

int main(int argc, char** argv) {
	int num;
	int divisores = 0;
	std::cout<<"Insira o numero: ";
	std::cin>>num;
	
	for(int contador = 1; contador <= num; contador++){
			if(num % contador == 0){
			divisores++;	
			}
	}
	
	if(divisores == 2){
		std::cout<<"\nNumero eh primo";
	}
	else{	
		std::cout<<"\nNumero nao eh primo";
	}
	return 0;
}
