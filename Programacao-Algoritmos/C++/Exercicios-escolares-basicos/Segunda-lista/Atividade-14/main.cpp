#include <iostream>
#include <string>
 /* Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:07/06/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição: Ler um número.
Exibir o dia da semana correspondente.
?? Criar uma função para essa verificação.
 */
using namespace std;

int main() {
    int dia;
    int mes;
    int ano;

    cout << "Digite o dia: ";
    cin >> dia;

    cout << "Digite o mes: ";
    cin >> mes;

    cout << "Digite o ano: ";
    cin >> ano;

    int resultado = (dia + mes + ano) % 7;

    string dias[] = {
        "Sabado",
        "Domingo",
        "Segunda-feira",
        "Terca-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira"
    };

    cout << "Dia da semana: " << dias[resultado] << endl;

    return 0;
}
