/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:14/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
 */
 #include <iostream>
using namespace std; 

int main(int argc, char** argv) {
	int num;
	int maior;
	int menor;
	
	for(int i = 1; i <= 10; i++){
	//Para inserir os números		
		cout<<"Insira o numero "<<i<<": ";
		cin>>num;
	
	//Primeiro número como referência, para poder comparar com os outros
		if(i == 1){
			maior = num;
			menor = num;
		}
	
	//Verificar menor
		if(num < menor){
			menor = num;
		}
	
	//Verificar maior
		if(num > maior){
			maior = num;
		}
		
	
	}
	//Resultado
	cout<<"RESULTADO: ";
	cout<<"\nMaior numero: "<<maior;
	cout<<"\nMenor numero: "<<menor;
	return 0;
}
