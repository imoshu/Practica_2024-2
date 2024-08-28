#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    double suma, producto, diferencia, cociente;
    cout << "Introduzca el primer número: ";
    cin >> num1;

    cout << "Introduzca el segundo número:";
    cin >> num2;

    //Calcular suma, producto, diferencia y cociente.
    suma = num1 + num2;
    producto = num1 * num2;
    diferencia = num1 - num2;
    if (num2 != 0) {
        cociente = num1 / num2;
    } else {
        cout << "No se permite la división por cero." << endl;
        cociente = 0; // Establecer un valor predeterminado para cociente en caso de división por cero
    }
    cout << "Suma: " << suma << endl;
    cout << "producto: " << producto << endl;
    cout << "diferencia: " << diferencia << endl;
    cout << "cociente: " << cociente << endl;

    return 0;
}