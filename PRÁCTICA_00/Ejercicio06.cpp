// Materia: Programación I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana
// Carrera: Comunicación Digital Audiovisual
// Fecha de Creación: 16/08/2026
 #include<iostream>
 using namespace std;
 int main () {
    float practica, teorica, participacion;

    cout<<"Digite la nota de practica: "; cin>>practica;
    cout<<"Digite la nota teorica: "; cin>>teorica;
    cout<<"Digite la nota de participacion: "; cin>>participacion;

    practica *= 0.30; //practica = practica * 0.30
    teorica *= 0.60;
    participacion *= 0.10;

    float nota_final = practica + teorica + participacion;

    cout<<"nLa nota final es: "<<nota_final;
 }
