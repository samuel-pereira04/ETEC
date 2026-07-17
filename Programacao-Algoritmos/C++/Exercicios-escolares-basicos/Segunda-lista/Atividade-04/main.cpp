/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:28/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
  Ler dois números inteiros e calcular:
	Adição
	Subtração
	Multiplicação
	Divisão
	Criar uma função para cada operação.
 */
 
#include <iostream>
using namespace std; 

//FUNÇÕES

//Adição
	int adicao (int a, int b){
		return a + b;		 
	}

//Subtração	
	int subtracao (int a, int b){
		return a - b;
	}
	
//Multiplicação	
	int multiplicacao (int a, int b){
		return a * b;
	}
	
//Divisão	
	double divisao (int a, int b){
		return (double) a / b;
	}
	
	
int main(int argc, char** argv) {
	
	//Variáveis
	int a, b;
	int soma_adi, soma_sub, soma_mul;
	double soma_div;
	
	//Inserir números
	cout << "Insira o primeiro numero: ";
		cin >> a;
	cout << "Insira o segundo numero: ";
		cin >> b;
	
	//CÁLCULO
	soma_adi = adicao(a, b); //Adição
	
	soma_sub = subtracao(a, b); //Subtração
	
	soma_mul = multiplicacao(a, b); //Multiplicação
	
	soma_div = divisao(a, b); //Divisão

	//Resultado 
	cout<<"\n\nRESULTADO: ";
	
	cout <<"\n\nAdicao: \n" << a << " + " << b << " = " << soma_adi; //Adição
	cout <<"\n\nSubtracao: \n" << a << " - " << b << " = " << soma_sub; //Subtração
	cout <<"\n\nMultiplicacao: \n" << a << " * " << b << " = " << soma_mul; //Multiplicação
	cout <<"\n\nDivisao \n" << a << " / " << b << " = " << soma_div; // Divisão

	return 0;
}
