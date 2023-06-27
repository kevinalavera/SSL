#include <stdio.h>
#include "conversion.h"

double getFarenheit(double celsius){
    double fahr;
    fahr = (celsius*9/5)+32;
    int aux = fahr;
    fahr = aux;
    return fahr;
}

double getCelsius(double fahr){
    double celsius;
    celsius = 5 * (fahr-32)/9;
    int aux = celsius;
    celsius = aux;
    return celsius;
}

