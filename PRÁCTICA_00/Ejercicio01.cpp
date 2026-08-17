// Materia: Programación I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana
// Carrera: Comunicación Digital Audiovisual
// Fecha de Creación: 16/08/2026
#include<iostream>
using namespace std;
int main () {
    int n1, n2, suma = 0, resta = 0, multiplicación = 0, division = 0;
    cout<<"Digite un número: "; cin>>n1;
    cout<<"Digite otro número: "; cin>>n2;
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicación = n1 * n2;
    division = n1 / n2;
    cout<<"La suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicación es: "<<multiplicación<<endl;
    cout<<"La división es: "<<division<<endl;
    return 0;
}