#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "Ingrese cinco números enteros:" << endl;
    cout << "Número 1: ";
    cin >> num1;
    cout << "Número 2: ";
    cin >> num2;
    cout << "Número 3: ";
    cin >> num3;
    cout << "Número 4: ";
    cin >> num4;
    cout << "Número 5: ";
    cin >> num5;
    int menor = num1;
    int mayor = num1;
    if (num2 < menor) menor = num2;
    if (num3 < menor) menor = num3;
    if (num4 < menor) menor = num4;
    if (num5 < menor) menor = num5;
    if (num2 > mayor) mayor = num2;
    if (num3 > mayor) mayor = num3;
    if (num4 > mayor) mayor = num4;
    if (num5 > mayor) mayor = num5;
    cout << "El número más pequeño es: " << menor << endl;
    cout << "El número más grande es: " << mayor << endl;

    return 0;
}
