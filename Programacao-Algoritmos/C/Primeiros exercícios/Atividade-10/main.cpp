/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:21/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Simule um jogo de adivinhação. O programa deve gerar um número aleatório e o jogador precisa acertar o número. Cada vez que o jogador informar o número, deve exibir se o palpite é muito alto, muito baixo ou correto. Quando for correto, exibir a quantidade de palpites.
 */
 #include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	char resposta;
	// Pergunta inicial 
	cout<<"JOGO DA ADIVINHACAO! \nDeseja jogar? (s/n): ";
	cin>>resposta;
	while(resposta == 's'){
		cout<<"Um numero de 1 a 100 foi sorteado\n";
		//Variáveis do jogo
			srand(time(0));
			int numram = rand() % 100 + 1;
			int numjog = 0;
			int palpites = 0;
			
				while (numram != numjog){
					cout<<"\nDigite seu palpite: ";
					cin>>numjog;
					
					//Comparação com o número sorteado
						if (numram > numjog){
							cout<<"Errou. O numero sorteado eh maior\n";
						}
						else if (numram < numjog){
						cout<<"Errou. O numero sorteado eh menor\n";
						}
		palpites++;
			}
	
	// Vitória
		cout<<"\n\nVOCE ACERTOU!";
		cout<<"\nNumero sorteado: "<<numram;
		cout<<"\nQuantidade de palpites: "<<palpites;
		
	// Pergunta para jogar novamente
		cout<<"\n\nDeseja jogar de novo? (s/n)";
		cin>>resposta;
	}
	return 0;
}
