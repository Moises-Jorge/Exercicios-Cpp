// Programa que leh o quanto de dinheiro uma pessoa tem na carteira e mostra quantos dolares ela pode comprar
#include <iostream>
using namespace std;

int main() {
    float kwanza = 0;
    cout << "\nQuanto voce tem na carteira(em kz): ";
    cin >> kwanza;

    cout << "\n" << kwanza << "kz = $" << kwanza * 0.01 << endl;
    return 0;
}