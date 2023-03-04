// Programa que leh largura e a altura de uma parede em metros, calcula a sua area e a quantidade de tinta necessaria para pinta-la, sabendo que cada litro de tinta pinta uma area de 2m^2.
#include <iostream>
using namespace std;

int main() {
    float larg = 0, altura = 0, area = 0, qtdTintas = 0;

    cout << "\nDigite a largura da parede(em metros): ";
    cin >> larg;
    cout << "Digite a altura da parede(em metros): ";
    cin >> altura;

    area = larg * altura;
    qtdTintas = area / 2;

    cout << "\nArea da parede = " << area << "m^2 " << endl;
    cout << "Serao necessario " << qtdTintas << "l de tinta para pintar essa parede!" << endl;

    return 0;
}