// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026

#include <iostream>
using namespace std;
int main (){
    int numero, suma = 0;
    do{
        cout<<"Ingrese una cifra entre 1 y 10";
        cin>>numero;
    }while (((numero>20) || (numero<30))&&(numero != 0));
    
    cout<<"La suma de los numeros es: "<<suma<<endl;

    system("pause");
    return 0;
}