// Programa que leh dois numeros e apresenta o resultado da soma entre eles
#include <iostream>
using namespace std;

int main() {
    short num1 = 0, num2 = 0;

    cout << "\nDigite um numero: ";     cin >> num1;
    cout << "Digite outro numero: ";    cin >> num2;

    cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2 << "\n\n";
    return 0;
}