// Materia: Programación I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana
// Carrera: Comunicación Digital Audiovisual
// Fecha de Creación: 16/08/2026
#include<iostream>
using namespace std;
int main(){
    float a, b, c, d, e, f, resultado = 0;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>a;
    cout<<"Digite el valor de c: "; cin>>a;
    cout<<"Digite el valor de d: "; cin>>a;
    cout<<"Digite el valor de e: "; cin>>a;
    cout<<"Digite el valor de f: "; cin>>a;

    resultado = (a+(b/c))/(d+(e/f));
    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}