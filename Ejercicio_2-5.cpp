#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    
    // Pedir al usuario que ingrese los tres números
    cout << "Ingresa el primer número: ";
    cin >> x;
    
    cout << "Ingresa el segundo número: ";
    cin >> y;
    
    cout << "Ingresa el tercer número: ";
    cin >> z;
    
    // Calcular el producto de los tres números
    int result = x * y * z;
    cout << "El producto de los tres números es: " << result << endl;

    return 0;
}
