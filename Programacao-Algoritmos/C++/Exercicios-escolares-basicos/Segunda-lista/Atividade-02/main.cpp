/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:22/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: 
   Ler a base e o expoente.
   Calcular a potência usando repetição.
   Criar uma função para o cálculo.
 */
 
 #include <iostream>
using namespace std;

// Função que calcula a potência
// Recebe o expoente, a base e soma
int potencia (int exp, int bas, int soma = 1){
    
    // Repete a multiplicação de acordo com o expoente
      for(int i = 1; i <= exp; i++){
            soma = soma * bas;
        }  
    return soma;
}
int main() {
    //Variáveis 
    int expoente;
    int base;
    int resultado ;
    
    // Entrada da base
    cout << "Insira a base da potenciacao: ";
        cin >> base;
    
    // Entrada do expoente
    cout << "Insira o expoente da potenciacao: ";
        cin >> expoente;
    
    // Chama a função 
    resultado = potencia(expoente, base);
    
    //Exibe o resultado final
    cout << "\nRESULTADO: " << resultado;
    return 0;
}
