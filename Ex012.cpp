// Programa que leh o preco de um produto e mostra na tela o novo preco com 5% de desconto.
#include <iostream>
using namespace std;

int main() {
    float antigoPreco = 0, novoPreco = 0;

    cout << "\nInforme o preco do produto: ";
    cin >> antigoPreco;

    novoPreco = antigoPreco - (antigoPreco * 0.05);

    cout << "\nO atual preco do produto eh: " << novoPreco << "kz porque sofreu um desconto de 5%." << endl;
    return 0;
}