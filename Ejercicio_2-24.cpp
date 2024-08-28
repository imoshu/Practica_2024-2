#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;
    
    int suma = num1 + num2;
    
    cout << "El primer número (" << num1 << ") es " << (num1 % 2 != 0 ? "impar" : "par") << "." << endl;
    cout << "El segundo número (" << num2 << ") es " << (num2 % 2 != 0 ? "impar" : "par") << "." << endl;
    cout << "La suma (" << suma << ") es " << (suma % 2 != 0 ? "impar" : "par") << "." << endl;

    return 0;
}
