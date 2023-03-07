// Programa que recebe uma temperatura em graus Celsius e o converta para graus Fahrenheit.
#include <iostream>
using namespace std;

int main() {
    float gCelsius = 0, gFahr = 0;

    cout << "Informe a temperatura em grau ºC: ";
    cin >> gCelsius;

    gFahr = gCelsius * 1.8 + 32;

    cout << gCelsius << "ºC = " << gFahr << "ºF" << endl;
    return 0;
}