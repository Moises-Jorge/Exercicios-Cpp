// Programa que leh a quantidade de km percorrido por um carro alugado e a quantidade de dias pelos quais o carro foi alugado; calcula o preco a pagar sabendo que o carro custa 60kz por dia e 0,15kz por km percorrido
#include <iostream>
using namespace std;

int main() {
    float kmPercorrido = 0, preco_a_pagar = 0;
    unsigned short dias = 0;

    cout << "\nQuantos km o carro percorreu? ";
    cin >> kmPercorrido;
    cout << "Por quantos dias? ";
    cin >> dias;

    preco_a_pagar = (kmPercorrido * 0.15) + (dias * 60);

    cout << "\nTotal a pagar: " << preco_a_pagar << "kz." << endl;
    return 0;
}