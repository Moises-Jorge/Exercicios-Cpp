// Programa que leh um numero real qualquer e mostra na tela somente a parte inteira deste numero
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num = 0;
    cout << "Digite um numero com casas decimais: ";
    cin >> num;
    cout << "Parte inteira do numero digitado: " << trunc(num) << endl;
    return 0;
}