#include <iostream>
#include <vector>
using namespace std;

// Función que genera la secuencia de Tribonacci
void tribonacci(const int iniciales[3], int n, vector<int>& result) {
    // Limpiar el vector en caso de que ya contenga datos
    result.clear();

    // Si n es 0, retornar 0 y salir
    if (n == 0) {
        result.push_back(0);
        return;
    }

    // Agregar los términos iniciales
    for (int i = 0; i < 3 && i < n; ++i) {
        result.push_back(iniciales[i]);
    }

    // Calcular los términos restantes
    for (int i = 3; i < n; ++i) {
        int nextTerm = result[i - 1] + result[i - 2] + result[i - 3];
        result.push_back(nextTerm);
    }
}

int main() {
    int iniciales[3];
    cout << "Ingrese tres números iniciales para la secuencia de Tribonacci: ";
    cin >> iniciales[0] >> iniciales[1] >> iniciales[2];

    int n;
    cout << "Ingrese el número de términos de la secuencia de Tribonacci: ";
    cin >> n;

    vector<int> sequence;
    tribonacci(iniciales, n, sequence);

    // Imprimir la secuencia
    cout << "Secuencia de Tribonacci: ";
    for (int term, sequence; 
        cout << term << " ";
    cout << endl

	return 0;
}
