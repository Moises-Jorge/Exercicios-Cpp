// Programa que leh um numero e mostra o antecessor e sucessor do mesmo.
#include <iostream>
using namespace std;

int main() {
    short num = 0;
    cout << "\nDigite um numero: ";
    cin >> num;
    cout << "\nAntecessor de " << num << " eh " << num - 1 << endl;
    cout << "Sucessor de " << num << " eh " << num + 1 << endl;
    return 0;
}