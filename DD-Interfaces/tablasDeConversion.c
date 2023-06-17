#include <stdio.h>
#include "conversion.h"

void printFila(double valor){
    printf("%d", valor);
}

void printFilas(double valorUno, double valorDos){
    printFila(valorUno);
    printf("\t")
    printFila(valorDos);
    printf("\n");
}

void printTablaFahrenheit(const UPPER, const LOWER, const STEP){
    double fahr, celsius;
    printf("%s\t%s\n", "fahr", "celsius");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        celsius = getCelsius(fahr);
        printFilas(fahr, celsius);
    }
}

void printTablaCelsius(const UPPER, const LOWER, const STEP){
    double fahr, celsius;
    printf("%s\t%s\n", "celsius", "fahr");
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP){
        celsius = getFarenheit(celsius);
        printFilas(celsius, fahr);
    }
}

void printTablas(const UPPER, const LOWER, const STEP) {
    printTablaCelsius(UPPER, LOWER, STEP);
    printTablaFahrenheit(UPPER, LOWER, STEP);
}




int main(){
    const UPPER = 300;
    const LOWER = 0;
    const STEP = 20;
    printTablas(UPPER, LOWER, STEP);
    return 0;
}










