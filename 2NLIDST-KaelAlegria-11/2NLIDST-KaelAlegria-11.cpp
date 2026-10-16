#include <iostream>

using namespace std;

// Función Recursiva
int sumaRecursiva(int n) {
    if (n <= 9) {
        return n; // Caso base
    }
    else {
        return sumaRecursiva(n / 10) + (n % 10);
    }
}

// Función Iterativa
int sumaIterativa(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10; // Extrae el último dígito
        n /= 10;        // Elimina el último dígito
    }
    return suma;
}

int main() {
    int cantidadNumeros;

    cout << "=== SUMA DE DÍGITOS EN C++ ===" << endl;
    cout << "¿Cuántos números va a ingresar?: ";
    cin >> cantidadNumeros;

    for (int i = 1; i <= cantidadNumeros; ++i) {
        int numero;
        cout << "Ingrese el número " << i << " (entero positivo): ";
        cin >> numero;

        if (numero < 0) {
            cout << "Por favor, ingrese un número natural (mayor o igual a 0)." << endl;
            i--; // Decrementar para volver a pedir el número actual
            continue;
        }

        // Llamada a ambas funciones
        int resRecursivo = sumaRecursiva(numero);
        int resIterativo = sumaIterativa(numero);

        cout << "-> Suma de dígitos (Recursivo): " << resRecursivo << endl;
        cout << "-> Suma de dígitos (Iterativo): " << resIterativo << endl;
    }

    cout << "\n¡Proceso finalizado!" << endl;
    return 0;
}
