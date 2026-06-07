#include <iostream>
#include <string>
using namespace std;

int main() {
    //VARIÁVEIS
    string nome;
    bool maior;
    int idade;
    double altura;
    float peso;
    char sexo;

    //Entrada do nome
    cout << "Insira seu nome: ";
    cin >> nome;

    //Entrada da idade
    cout << "Insira sua idade: ";
    cin >> idade;

        //Verifica se é maior de idade
            if (idade >= 18){
                maior = true;
            }
            else{
                maior = false;
            }
            

    //Entrada do gênero
    cout << "Insira seu genero (m/f): ";
    cin >> sexo;
        
        // Verificar se o gênero existe
            while (sexo != 'm' && sexo != 'f' && sexo != 'M' && sexo != 'F'){
                cout << "Insira um genero valido (m/f): ";
                cin >> sexo;
            }

    //Entrada da altura
    cout <<  "Insira sua altura em metros: ";
    cin >> altura;

    //Entrada de peso
    cout << "Insira seu peso em kg: ";
    cin >> peso;

    //RESULTADO
            // Introdução masculina
                if(sexo == 'm'){
                    cout << "Ola senhor " << nome << endl;
                }
            // Introduão feminina
                else if (sexo == 'f'){
                    cout << "Ola senhora " << nome << endl;
                }

    //Resultado padrão
        cout << "Voce tem " << idade << " anos" << endl;
            if (maior == true){
                cout << "Voce eh maior de idade" << endl;
            }
            else{
                cout << "Voce eh menor de idade" << endl;
            }
        cout << "Sua altura eh de " << altura << "m" << endl;
        cout << "Voce pesa " << peso << "kg.";

    return 0;
}