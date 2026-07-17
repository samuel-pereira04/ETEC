/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:28/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 	Ler uma palavra.
	Verificar se é palíndromo.
	Criar uma função que retorne verdadeiro ou falso.
 */

#include <iostream>
#include <string>
using namespace std;

// Função que verifica se é palíndromo
bool palindromo(string palavra){
    
	// O laço percorre somente até a metade da palavra
   for(int i = 0; i < palavra.length()/2; i++){
		
        // Compara a letra da posição i (início)
        // com a letra correspondente do final
        if(palavra[i] != palavra[palavra.length() - 1 - i]){
			
			//Se encontra qualquer diferença não é palíndromo
            return false;
        }
    }

    return true;
}

int main(int argc, char** argv) {
//Variável
	string palavra;
	char resposta = 's';

//Título
cout<<"Verificador de Palindromo ";

//Repetição do código
while(resposta == 's'){

//Entrada da palavra
	cout << "\nInsira a palavra: ";
		cin >> palavra;

// Verificação
    if(palindromo(palavra)){

        cout << "A palavra "<< palavra << " eh um palindromo.";
    }
    else{

        cout << "A palavra "<< palavra << " nao eh um palindromo.";
    }
		cout<<"\n\nDeseja inserir outra palavra? (s/n)\n";
		cin>>resposta;
}
	return 0;

}
