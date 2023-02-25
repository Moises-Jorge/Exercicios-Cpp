//Programa que leh a data de nascimento(dia, mes e ano) de uma pessoa e imprime de maneira formatada.
#include <iostream>
using namespace std;

int main() {
    short dia = 0; string mes = ""; int ano = 0;

    cout << "\nDigite sua data de nascimento\n";
    cout << "Dia: ";    cin >> dia;
    cout << "Mes: ";    cin >> mes;
    cout << "Ano: ";    cin >> ano;

    cout << "\nVc nasceu no dia " << dia << " de " << mes << " de " << ano << ". Correto??\n" << endl;
    return 0;
}