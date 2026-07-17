/*
 * Nome da instituição: Etec Vasco Antônio Venchiarutti
 * Data:28/05/2026
 * Autores: Samuel Gomes Pereira e Vitor Cauã Almeida Moura
 * Descrição:7) Ler 5 números.
Verificar se estão:
Em ordem crescente
Em ordem decrescente
Não ordenados
 Criar uma função para essa análise.
 */
#include <iostream>

using namespace std;

string analisarOrdem(int v[], int tamanho) {
    bool crescente = true;
    bool decrescente = true;

    for (int i = 1; i < tamanho; i++) {
        if (v[i] <= v[i - 1]) {
            crescente = false;
        }

        if (v[i] >= v[i - 1]) {
            decrescente = false;
        }
    }

    if (crescente) {
        return "Em ordem crescente";
    }
    else if (decrescente) {
        return "Em ordem decrescente";
    }
    else {
        return "Nao ordenados";
    }
}

int main() {
    int numeros[5];

    cout << "Digite 5 numeros:\n";

    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << analisarOrdem(numeros, 5);

    return 0;
}
