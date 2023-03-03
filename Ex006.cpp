// Programa que leh um numero e mostra o dobro, o triplo e a raiz quadrada do mesmo.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "\nDigite um numero: ";
    short num = 0;
    cin >> num;

    cout << "\nDobro de " << num << " = " << num * 2 << endl;
    cout << "Triplo de " << num << " = " << num * 3 << endl;
    cout << "RaizQ de " << num << " = " << sqrt(num) << endl;
    cout << "RaizQ de " << num << " = " << pow(num, (1.0/2)) << endl;
    return 0;
}