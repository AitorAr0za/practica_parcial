#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/*
    [] declaramos una variable de tipo int llamada "numerito"
    [] le pedimos al usuario inicializar la variable
    [] mostramos en pantalla todos los numeros previos al numero ingresado, hasta el 0
*/

int main () {

    int numerito;

    printf("Ingrese un numero para realizar un conteo hasta 0: ");
    scanf("%d", &numerito);

    while (numerito != -1) {

        printf("%d\n", numerito);
        numerito--;

    }


    return 0;
}
