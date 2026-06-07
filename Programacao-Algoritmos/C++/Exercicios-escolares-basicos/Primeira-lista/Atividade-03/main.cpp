/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:14/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler vários números até que seja digitado um número negativo. Calcular e exibir a soma desses números.
 */
 
 #include <iostream>
using namespace std;

int main(int argc, char** argv) {
//Variáveis//	
	float num;
	int soma = 0;

//Inserir a primeira variável//
	cout<<"Insira numero: ";
	cin>>num;
		
//Loop até um número negativo//		
	while(num >= 0){
		soma = soma + num;
			cout<<"Insira numero: ";
			cin>>num;
	}

//Mostrando o resultado após o número negativo//
	if(num <= 0){
		cout<<"Resultado: "<<soma;
	}
	
	return 0;
}
