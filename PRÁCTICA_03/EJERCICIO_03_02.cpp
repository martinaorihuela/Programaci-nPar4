// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n;
    int numero;
    int suma = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;
    int divisores;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        numero = 1 + rand() % 100;

        cout << numero << " ";

        suma += numero;

        if (numero % 2 == 0) {
            sumaPares += numero;
        }
        else {
            sumaImpares += numero;
        }

        divisores = 0;

        for (int j = 1; j <= numero; j++) {
            if (numero % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            sumaPrimos += numero;
        }
    }

    cout << "\n\nSuma de todos los numeros: " << suma << endl;
    cout << "Suma de los numeros pares: " << sumaPares << endl;
    cout << "Suma de los numeros impares: " << sumaImpares << endl;
    cout << "Suma de los numeros primos: " << sumaPrimos << endl;

    system("pause");

    return 0;
}



}









