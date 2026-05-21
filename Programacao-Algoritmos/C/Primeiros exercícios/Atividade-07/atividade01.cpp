#include <iostream>

int main() {
    int a;
    std::cout << "Digite uma variável: ";
    std::cin >> a;
    std::cout << "Você digitou: " << a;

bool primo; 

if (a<=1) {
    primo = false;
} else {
    primo = true;
}
 
 if (primo) {
        std::cout << "\nÉ primo";
    } else {
        std::cout << "\nNão é primo";
    }

    return 0;
}