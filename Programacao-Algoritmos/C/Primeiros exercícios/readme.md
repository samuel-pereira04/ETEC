# Lista 10 Exercícios de C++
# ATV-CPP-01
---
## Exercício 1
### Enunciado:
Ler um número inteiro. Verificar e exibir se o número é primo.
### Resolução:
```
#include <iostream>
/*
 * Nome da institui��o: Etec Vasco Ant�nio Venchiarutti
 * Data:07/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cau� Almeida Moura
 * Descri��o: Ler um n�mero inteiro. Verificar e exibir se o n�mero � primo.
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
```
---
