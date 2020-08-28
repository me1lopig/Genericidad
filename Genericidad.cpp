// Genericidad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// ejemplo de genericidad en funciones 
//

#include <iostream>
#include"mayor.h"

using namespace std;






int main()
{
    // variables enteras
    int datoEntero1;
    int datoEntero2;

    // variables flotantes

    float datoFlotante1;
    float datoFlotante2;

  
    // para el caso de numeros enteros

    cout << "Caso de dos numeros  enteros " << endl;
    cout << "Introduzca el primer numero entero " << endl;
    cin >> datoEntero1;

    cout << "Introduzca el segundo numero entero " << endl;
    cin >> datoEntero2;

    cout << "El mayor de " << datoEntero1 << " y de " << datoEntero2 << " es " << mayor(datoEntero1, datoEntero2)<<endl<<endl;



    // para el caso de numeros reales o flotantes

    cout << "Caso de dos numeros reales " << endl;
    cout << "Introduzca el primer numero real " << endl;
    cin >> datoFlotante1;

    cout << "Introduzca el segundo numero real " << endl;
    cin >> datoFlotante2;

    cout << "El mayor de " << datoFlotante1 << " y de " << datoFlotante2 << " es " << mayor(datoFlotante1, datoFlotante2) << endl<<endl;

    //cin.clear(); // unset failbit
    //cin.ignore(numeric_limits<streamsize>::max(), '\n'); // skip bad input




    // para el caso de numeros reales y flotantes

    cout << "Caso de un  numero entero y otro real" << endl;
    cout << "Introduzca el numero real " << endl;
    cin >> datoFlotante1;

    cout << "Introduzca el numero entero" << endl;
    cin >> datoEntero1;

    cout << "El mayor de " << datoFlotante1 << " y de " << datoEntero1 << " es " << mayor(datoFlotante1, datoEntero1) << endl<<endl;





    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}


