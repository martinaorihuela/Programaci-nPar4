// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026
#include <iostream>
using namespace std;

int main() {

    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {

        for (int i = numero1; i >= numero2; i--) {
            cout << i << " ";
        }

    }
    else {

        for (int i = numero1; i <= numero2; i++) {
            cout << i << " ";
        }

    }

    cout << endl;

    system("pause");

    return 0;
}