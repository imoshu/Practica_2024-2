#include <iostream>
using namespace std;

int main() {
    // Declararamos variables
    int num1, num2;

    // Solicitamos al usuario los numeros
    cout << "Introduzca el primer número: ";
    cin >> num1;

    cout << "Introduzca el segundo número:";
    cin >> num2;

    // Comparamos los dos números
    if (num1 > num2) {
        cout << num1 << " es mayor" << endl;
    } else if (num2 > num1) {
        cout << num2 << " es mayor" << endl;
    } else {
        cout << "Estos números son iguales" << endl;
    }

    return 0;
}