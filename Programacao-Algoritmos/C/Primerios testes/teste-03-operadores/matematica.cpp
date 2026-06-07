#include <iostream>
// Biblioteca para usar potência
#include <math.h>

using namespace std;

int main() {
    int a, b;
    
    //Entrada de dados
    cout << "Insira primeiro numero: ";
        cin >> a;
    cout << "Insira segundo numero: ";
        cin >> b;
    
    //ADIÇÃO (se usa '+')
        int adi = a + b;
            cout << "Soma: " << adi << endl;

    //SUBTRAÇÃO (se usa '-')
        int sub = a - b;
            cout <<"Subtracao: " << sub << endl;

    //MULTIPLICAÇÃO (se usa '*')
        int mul = a * b;
            cout << "Multiplicacao: " << mul << endl;
    
    //DIVISÃO (se usa '/')
        int quodiv = a / b;
            cout << "Quociente da Divisao: " << quodiv << endl;

    //RESTO DA DIVISÃO (se usa '%')
        int res = a % b;
            cout << "Resto da Divisao: " << res << endl;

    //DIVISÃO COMPLETA (precisa da varíavel double/float)
        float div = (float) a / (float) b;
            cout << "Divisao: " << div << endl;

    //POTÊNCIA (precisa da biblioteca math.h) (se usa 'pow')
        float pot = pow(a,b);
            cout << "Potencia: " << pot << endl;

    //INCREMENTO (pode ser a+=1 ou a++)
        cout << "Primeiro número antes da incrimentação: " << a;
        a++;
        cout << "Primeiro número depois da incrimentação " << a;
    }


