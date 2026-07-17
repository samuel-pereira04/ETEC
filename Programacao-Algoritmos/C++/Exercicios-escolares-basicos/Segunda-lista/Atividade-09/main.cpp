#include <iostream>
#include <string>
using namespace std;

int contarVogais(string texto) {
    int cont = 0;

    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
        }
    }

    return cont;
}

int contarConsoantes(string texto) {
    int cont = 0;

    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);

        if (c >= 'a' && c <= 'z') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                cont++;
            }
        }
    }

    return cont;
}

int main() {
    string nome;

    cout << "Digite o nome completo: ";
    getline(cin, nome);

    cout << "Vogais: " << contarVogais(nome) << endl;
    cout << "Consoantes: " << contarConsoantes(nome) << endl;

    return 0;
}
