/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:14/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler um número para a parada final e outro número que representa um múltiplo. Exibir os múltiplos do número lido de 1 até o número final lido.
 */
 
 #include <iostream>
using namespace std;
int main(int argc, char** argv) {
//Variáveis
	int final;
	int multiplo;
	
//Colocar valor nas variáveis
	cout<<"Insira o numero final: ";
		cin>>final;
	cout<<"Insira o multiplo:";
		cin>>multiplo;
	cout<<"RESULTADO: \n";

//Operação
	for(int i = 1;i <= final; i++){
		if ( i % multiplo == 0){
			cout << i << endl;
		}
	}
	return 0;
}
