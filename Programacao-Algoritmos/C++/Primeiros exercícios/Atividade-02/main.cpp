/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:07/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler um número inteiro, calcular e exibir separadamente as potências de 2^0 até 2^(esse número).
 */
#include <iostream>
#include <cmath>

int main(int argc, char** argv) {
	int num;
	int resultado;
	
	std::cout<<"Insira o numero: ";
	std::cin>>num;
	
	for(int contador = 0; contador <= num; contador++){
		resultado = pow(2,contador);
		std::cout<<"2 ^ "<<contador<<" = "<<resultado<<"\n";
	}
	return 0;
}

