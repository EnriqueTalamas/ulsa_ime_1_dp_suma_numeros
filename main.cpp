#include <iostream>
using namespace std;

int main() {
    const int CANTIDAD = 5;
    int CONTADOR = 0;
  //El programa solicita al usuario ingresar 5 números 
    double suma = 0.0;
    double numero = 0.0;
// El numero de entrada puede ser un número decimal, 
    cout << "Suma de " << CANTIDAD << " numeros\n";

    while (CONTADOR < CANTIDAD) {
        cout << "Ingrese el numero " << CONTADOR + 1 << ": ";
        cin >> numero;
// Verifica si la entrada es válida
        if (cin.fail()) {
            cin.clear();              // limpia el estado de error
            cin.ignore(1000, '\n');   // descarta la entrada incorrecta
            cout << " El valor ingresado no es un numero valido.\n";
        } else {
            suma += numero;
            // Incrementa el contador solo si la entrada es válida
            CONTADOR++;
        }
    }

    cout << "La suma total es: " << suma << endl;
    return 0;
    // Marca el final del programa con el 0
}
