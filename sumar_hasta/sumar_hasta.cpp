#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

/*
    [] declaramos las variables "limite" y "numeraso", inicializando esta ultima como 0
    [] le pedimos al usuario inicializar la variable "limite"
    [] hacemos un bucle for desde el 1 hasta "limite"
    [] en cada ciclo, se iguala "numeraso" a "numeraso" + 1, basicamente, se le suma 1 al valor del "numeraso" del ciclo previo
    [] al terminar el bucle for, se muestra por pantalla el valor resultante de "numeraso"
*/

int main () {

    int limite;
    int numeraso = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++) {

        numeraso = numeraso + i;

    }

    printf("La sumatoria de todos los numeros previos a %d es %d", limite, numeraso);


    return 0;
}
