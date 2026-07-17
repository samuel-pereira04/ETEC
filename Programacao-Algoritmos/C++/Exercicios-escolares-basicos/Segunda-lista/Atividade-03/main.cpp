/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:28/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 Ler o sexo e a altura.
	Calcular o peso ideal:
	Masculino: 72,7 × altura - 58
	Feminino: 62,1 × altura - 44,7
	Criar uma função para cada caso.
 */
 
 #include <iostream>
using namespace std;

//Função do peso masculino
double masculino_peso (double altura, double soma){
	soma = (altura * 72.7) - 58;
    	return soma;
}

//Função do peso feminino
double feminino_peso (double altura, double soma){
	soma = (altura * 62.1) - 44.7;
		return soma; 
}

int main(int argc, char** argv) {
	//variáveis
	double altura, soma;
	char genero;
	
	//Entrada de gênero
	cout << "Insira o genero (m/f): ";
		cin >> genero;
	
	//Validação do gênero informado
	while (genero != 'm' && genero != 'f') {
        cout << "Insira um genero valido (m/f): ";
        	cin >> genero;
	}
	
	//Entrada de altura
	cout << "Insira a altura (em metros) : ";
		cin >> altura;
	
	//
	if (genero == 'm'){
		//Chama a função masculina
			soma = masculino_peso(altura, soma);
				cout << "Peso masculino ideal: " << soma << "kg";
	}
	else if(genero == 'f'){
		//Chama a função masculina
			soma = feminino_peso(altura, soma);
				cout << "Resultado feminino ideal: " << soma << "kg";
	}
	return 0;
}
