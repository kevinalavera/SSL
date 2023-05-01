# TP0

Este es el archivo en formato markdown donde expondré algunos puntos.

## Contenido

El uso que se le dará a esta carpeta es para almacenar el programa hello.c y además almacenaremos el mensaje que devuelve. Para ello lo primero tendremos que conseguir un compilador. En mi caso tengo el MSYS2 y al buscar la versión me aparece *gcc version 12.2.0*. Luego tendremos que compilar el programa que hayamos hecho en c, para este caso la versión de C que usé para compilar fue la 18. 

Para compilarlo usaremos el siguiente comando:

```c
gcc -std=c18 -o hello hello.c
```

Esto nos devuelve un ejecutable el cual mediante otro comando haremos que el mensaje se quede escrito en un archivo de texto.

```c
./hello.exe > output.txt
```

Y lo último sería agregarlo a GitHub
