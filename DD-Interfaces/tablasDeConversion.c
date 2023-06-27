#include <stdio.h>
#include "conversion.h"
const unsigned int UPPER = 300;
const unsigned int LOWER = 0;
const unsigned int STEP = 20;

void printFila(double );
void printFilas(double , double);
void printTablaFahrenheit(const unsigned int, const unsigned int, const unsigned int );
void printTablaCelsius(const unsigned int, const unsigned int, const unsigned int );
void printTablas(const unsigned int, const unsigned int, const unsigned int );


int main(){
    printTablas(UPPER, LOWER, STEP);
    return 0;
}



void printFila(double valor){
    printf("%g", valor);
}

void printFilas(double valorUno, double valorDos){
    printFila(valorUno);
    printf("\t");
    printFila(valorDos);
    printf("\n");
}

void printTablaFahrenheit(const unsigned int UPPER, const unsigned int LOWER, const unsigned int STEP){
    double fahr;
    double celsius;
    printf("%s\t%s\n", "fahr", "celsius");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        celsius = getCelsius(fahr);
        printFilas(fahr, celsius);
    }
}

void printTablaCelsius(const unsigned int UPPER, const unsigned int LOWER, const unsigned int STEP){
    double fahr;
    double celsius;
    printf("%s\t%s\n", "celsius", "fahr");
    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP){
        fahr = getFarenheit(celsius);
        printFilas(celsius, fahr);
    }
}

void printTablas(const unsigned int UPPER, const unsigned int LOWER, const unsigned int STEP) {
    printTablaCelsius(UPPER, LOWER, STEP);
    printTablaFahrenheit(UPPER, LOWER, STEP);
}
