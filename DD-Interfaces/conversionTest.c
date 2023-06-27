#include <stdio.h>
#include <assert.h>
#include "conversion.h"
 
int main(){
    assert(32 == getFarenheit(0));
    assert(82 == getCelsius(180));
    printf("No hay errores");
}