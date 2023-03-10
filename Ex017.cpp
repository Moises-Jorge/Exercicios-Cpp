// Programa que recebe os valores dos catetos oposto e adjacente de um triangulo rectangulo e calcula e mostra o comprimento da sua hipotenusa
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float catOposto = 0, catAdjacente = 0;
    cout << "Cateto Oposto = ";
    cin >> catOposto;
    cout << "Cateto Adjacente = ";
    cin >> catAdjacente;

    cout << "Hipotenusa = " << hypot(catOposto, catAdjacente) << endl;
    return 0;
}