#include <stdio.h>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

/*
    [] declaramos las variables "swich", "usuario", "contrasenia", "intento_usuario", e "intento_contrasenia"
    [] mientras que "swich" sea igual a 0 se le pedira al usuario inicializar "intento_usuario" e "intento_contrasenia"
    [] si "intento_usuario" es igual a "usuario", y "intento_contrasenia" es igual a "contrasenia", "swich" sera igualado a 0, terminando el bucle while
    [] pero si la condicion previa no ocurre, se le informara al usuario que uno de los datos ingresados no es correcto,
       y le volvera a pedir los datos hasta que esten correctos
*/

int main () {

    int swich = 1;
    string usuario = "rodri";
    string contrasenia = "compu";
    string intento_usuario;
    string intento_contrasenia;


    while (swich != 0) {

        printf("Ingrese el usuario: ");
        cin >> intento_usuario;

        cout << "Bienvenido " << intento_usuario << endl << "Ingrese su contrasenia: ";
        cin >> intento_contrasenia;

            if (intento_contrasenia == contrasenia && intento_usuario == usuario) {

                swich = 0;
                printf("Has ingresado al sistema\n");

            }
            else {

                printf("Uno de los datos ingresados no es correcto\n");

            }

    }

    return 0;

}
