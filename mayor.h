#pragma once

#include <iostream>

using namespace std;


// plantilla de funcion

template <class T, class T2> // se pueden usar dos tipos de datos distintos

T mayor(T dato1, T2 dato2)
{
    // implementacion de la funcion


    if (dato1 > dato2)
    {
        return dato1;
    }

    else
    {
        return dato2;
    }

}