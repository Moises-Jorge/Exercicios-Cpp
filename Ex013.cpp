// Programa que leh o salario de um funcionario e mostra o novo salario deste funcionario com 15% de aumento.
#include <iostream>
using namespace std;

int main() {
    float salario = 0, novoSalario = 0;

    cout << "\nInforme o seu salario: ";
    cin >> salario;

    novoSalario = salario + (salario * (15.0/100));

    cout << "\nO seu novo salario eh: " << novoSalario << "kz." << endl;
    return 0;
}