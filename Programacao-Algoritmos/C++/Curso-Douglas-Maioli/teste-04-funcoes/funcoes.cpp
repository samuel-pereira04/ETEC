#include <iostream>
using namespace std;

//Função void - não retorna nada
void entrada(){
    cout << "Insira um numero: " << endl;
}

//Função que tem entrada 
int somar (int x, int y){
    int soma; //Variável só vai valer dentro dessa função
    soma = x + y;
    return soma;
}

int main () {
    int a, b, resultado;

    entrada();

    cin >> a;

    entrada();

    cin >> b;

    resultado = somar(a,b);

    cout << "RESULTADO: " << resultado;
    return 0;
}