// Materia: ProgramaciOn I, Paralelo 4
// Autor: Martina Fabiana Orihuela Maidana 
// Carrera del estudiante: Comunicacion Digital Multimedia
// Fecha creacion: 23/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int n;
    int precio;
    int producto = 1;

    double utilidad;
    double iva;
    double descuento;
    double precioFinal;

    double sumaTotal = 0;
    double ivaTotal = 0;
    double descuentosTotal = 0;

    double productoCaro = 0;
    double productoBarato = 0;

    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    srand(time(NULL));

    for (int i = 1; i <= n; i++) {

        // Generar precio entre 10 y 10000
        precio = 10 + rand() % 9991;

        // Calcular utilidad e IVA
        utilidad = precio * 0.87;
        iva = precio * 0.13;

        // Descuento
        descuento = 0;

        if (precio > 2500) {
            descuento = precio * 0.05;
        }

        // Precio final
        precioFinal = precio - descuento;

        // Acumuladores
        sumaTotal += precioFinal;
        ivaTotal += iva;
        descuentosTotal += descuento;

        // Producto más caro
        if (i == 1) {
            productoCaro = precioFinal;
            productoBarato = precioFinal;
        }
        else {

            if (precioFinal > productoCaro) {
                productoCaro = precioFinal;
            }

            if (precioFinal < productoBarato) {
                productoBarato = precioFinal;
            }
        }

        cout << "Producto " << i << ": "
             << precioFinal << " Bs" << endl;
    }

    cout << "\n========== REPORTE ==========" << endl;

    cout << "Suma total del dinero ingresado: "
         << sumaTotal << " Bs" << endl;

    cout << "IVA total: "
         << ivaTotal << " Bs" << endl;

    cout << "Descuento total: "
         << descuentosTotal << " Bs" << endl;

    cout << "Producto mas caro: "
         << productoCaro << " Bs" << endl;

    cout << "Producto mas barato: "
         << productoBarato << " Bs" << endl;

    system("pause");

    return 0;
}