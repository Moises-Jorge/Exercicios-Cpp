// Programa que leh um valor em metros e o mostra convertido em centimetros e milimetros
#include <iostream>
using namespace std;

int main() {
    cout << "\nDigite um valor em metros: ";
    float valor_m = 0;
    cin >> valor_m;

    cout << "\n" << valor_m << "m = " << valor_m * 1000 << "km" << endl;
    cout << valor_m << "m = " << valor_m/100 << "cm" << endl;
    cout << valor_m << "m = " << valor_m/1000 << "mm" << endl;
    return 0;
}