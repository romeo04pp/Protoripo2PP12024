#include <iostream> //Librerias y Encabezados
#include <conio.h>
#include "Paciente.h"
#include "MenuPrincipal.h"
using namespace std;

main()
{

//Login para el Usuario
    bool accesoUsuario;

    paciente usuarioRegistrado;
    accesoUsuario = usuarioRegistrado.loginPersona();
    if (accesoUsuario)
        {
    int opciones;
    bool repetir = true;
    do
    {
	menuPrincipal();
    }while (repetir);}

    getch();
	return 0;
}
