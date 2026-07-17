/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:28/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
 	Ler o raio de 5 círculos.
	Calcular e exibir a soma das áreas.
	Criar uma função para calcular a área do círculo.
 */
 
 #include <iostream>
using namespace std;

//Função para calcular área
double calculo_area (double raio){
	return (raio * raio) * 3.15; 
}

int main(int argc, char** argv) {
	//Variáveis
	double raio;
	double area;
	double soma = 0;
	
	//Ciclo de repetição até chegar no quinto círculo
	for(int i = 0; i < 5; i++){
		//Inserir dados
    	cout << "\nInsira o raio do circulo "<< i + 1 <<": ";
    		cin >> raio;
    		
    	//Chamar fórmular
    	area = calculo_area(raio);
    		cout << "Área do circulo " << i + 1 << ": " << area;
    	
    	//Somar as áreas
    	soma = soma + area;
}
	//Mostrar o resultado
    cout << "\n\nSoma total: " << soma;  

	return 0;
}
