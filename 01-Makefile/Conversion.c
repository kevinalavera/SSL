#include <stdio.h>
#include "Conversion.h"

void Farenheit(int upper, int lower, int step){
    int fahr, celsius;
    fahr = lower;
    printf("%s\t%s\n", "fahr", "celsius");
    while(fahr<=upper){
        celsius = 5 * (fahr-32)/9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void Celsius(int upper, int lower, int step){
    int fahr, celsius;
    celsius = lower;
    printf("%s\t%s\n", "celsius", "fahr" );
    while(celsius<=upper){
        fahr = (celsius*9/5)+32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}

int main(){
    int upper, lower, step;
    upper = 300;
    lower = 0;
    step = 20;
    
    Farenheit(upper, lower, step);
    
    Celsius(upper, lower, step);
    return 0;
}