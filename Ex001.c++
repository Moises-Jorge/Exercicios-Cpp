// Program that read a person name and print a welcome message according with digited name
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "\nDigite your name: ";
    cin >> name;
    cout << "Hello " << name << "! Nice to meet you.\n\n";
    return 0;
}