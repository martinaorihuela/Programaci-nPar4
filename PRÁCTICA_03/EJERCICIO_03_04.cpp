// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026
#include <iostream>
using namespace std;

int main() {

    int n;
    int factorial = 1;
    int suma = 0;

    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        factorial = factorial * i;

        suma = suma + factorial;
    }

    cout << "La suma de los factoriales es: " << suma << endl;

    system("pause");

    return 0;
}