// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026
#include <iostream>
using namespace std;

int main() {

    int numero;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i < numero; i++) {

        if (numero % i == 0) {
            suma += i;
        }

    }

    if (suma == numero) {
        cout << "El numero es perfecto." << endl;
    }
    else {
        cout << "El numero no es perfecto." << endl;
    }

    system("pause");

    return 0;
}
