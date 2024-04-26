#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

/*
    [] declaramos las variables "numerito" y "swich"
    [] le pedimos al usuario inicializar la variable "numerito"
    [] si el usuario ingresa un numero negativo, el programa se termina
    [] si el usuario ingresa un numero positivo, se hace un bucle for desde el 1 hasta "numerito"
    [] por cada numero que pasa, se pregunta si el resto de la division entre "numerito" y ese numero da 0, en caso afirmativo, se le suma 1 a "swich",
       en caso contrario no ocurre nada
    [] al terminar el bucle for, si "swich" es mayor a 2 significa que el numero no es primo, pero si es menor o igual a 2 si lo es.
    [] se le informa al usuario si el numero que ingreso es primo o no
*/

int main () {

    int numerito;
    int swich = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numerito);

    if (numerito < 1) {

        printf("\nTenes que ingresar un numero natural maestro\n");

    }

    else {

        for (int i = 1; i <= numerito; i++) {

            if (numerito % i == 0) {

                swich++;

            }

        }

    }

    if (swich > 2) {

        printf("El numero que has ingresado no es primo\n");

    }

    else if (swich <= 2) {

        printf("El numero que has ingresado es un numero primo\n");

    }




    return 0;
}
