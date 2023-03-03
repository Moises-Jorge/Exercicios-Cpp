// Programa que leh as notas de um aluno e calcula a sua media.
#include <iostream>
using namespace std;

int main() {
    cout << "\nNota 1: ";
    float nota1 = 0;
    cin >> nota1;

    cout << "Nota 2: ";
    float nota2 = 0;
    cin >> nota2;

    cout << "\nMedia = " << (nota1 + nota2)/2 << endl;
    return 0;
}