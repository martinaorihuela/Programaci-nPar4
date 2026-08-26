// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int numero;
    int aleatorio;
    int intentos = 0;

    srand(time(NULL));

    aleatorio = 1 + rand() % 100;

    cout << "Adivina el numero entre 1 y 100" << endl;

    do {

        cout << "Ingrese un numero: ";
        cin >> numero;

        intentos++;

        if (numero < aleatorio) {
            cout << "El numero aleatorio es mayor." << endl;
        }
        else if (numero > aleatorio) {
            cout << "El numero aleatorio es menor." << endl;
        }
        else {
            cout << "¡Adivinaste!" << endl;
        }

    } while (numero != aleatorio);

    cout << "Numero de intentos: " << intentos << endl;

    system("pause");

    return 0;
}