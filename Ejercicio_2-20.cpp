#include <iostream>
using namespace std;

int main() {
    double PI = 3.14159;
    int radio;
    cout << "Ingrese el radio del círculo como un número entero: ";
    cin >> radio;
    cout << "Diámetro: " << 2 * radio << endl;
    cout << "Circunferencia: " << 2 * PI * radio << endl;
    cout << "Área: " << PI * radio * radio << endl;

    return 0;
}