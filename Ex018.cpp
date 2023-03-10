// Programa que leh um angulo qualquer e mostra o seno, cosseno e a tangente do mesmo
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float angulo = 0;
    cout << "Informe o angulo: ";
    cin >> angulo;

    cout << "Seno de " << angulo << "º = " << sin(angulo) << endl;
    cout << "Cos de " << angulo << "º = " << cos(angulo) << endl;
    cout << "Tan de " << angulo << "º = " << tan(angulo) << endl;
    return 0;
}