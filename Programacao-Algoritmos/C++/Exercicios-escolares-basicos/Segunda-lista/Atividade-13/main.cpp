/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:07/06/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
	Ler 20 letras em um vetor.
	Ler uma letra e contar quantas vezes ela aparece.
 */
 
 #include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char letras [20]; //Vetor
	char procura; //Variável da letra que será procurada
	int contador = 0; //Variavel para contar quantas vezes a letra aparece
	
	//Mensagem para enviar as letras:
			cout << "Insira 20 letras: " << endl;

	//Entrada das letras
	for (int i = 0; i < 20; i++){
		cin >> letras[i];
	}
	
	//Entrada da letra que será procurada
	cout << "Qual letra deseja procurar?: ";
	cin >> procura;
	
	//Contador da letra escolhida
	for (int i = 0; i < 20; i++){
		if (letras[i] == procura){
			contador++;
		}		
	}
	
	//Resultado
	cout << "RESULTADO" << endl;
	cout << "Quantidade de " << procura << ": " << contador;
	return 0;
}
