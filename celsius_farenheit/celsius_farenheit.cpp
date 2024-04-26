#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>

using namespace std;

/*
    [] declaramos una variable de tipo int llamada "celsius"
    [] le pedimos al usuario inicializar la variable
    [] realizamos el pasaje de celsius a fahrenheit en una nueva variable int llamada "fahrenheit"
    [] printeamos la variable "fahrenheit" por pantalla
*/

int main () {

    int celsius;

    printf("Ingrese una temperatura en Celsius: ");
    scanf("%d", &celsius);

    int fahrenheit = ((celsius * 1.8) + 32);

    printf("\nLa temperatura ingresada en Celsius fue %d, y su equivalente en Fahrenheit es %d\n", celsius, fahrenheit);

    return 0;
}
