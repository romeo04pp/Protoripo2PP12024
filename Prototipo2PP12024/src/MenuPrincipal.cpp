#include "MenuPrincipal.h"
#include <cstdlib>
using namespace std;

void menuPrincipal() //funcion llamara al menu principal
{
    system("cls");
    int options;
    bool repetir = true;
    do {
    cout << "\n\t\t  Autor: Pablo Romeo Palencia Rosales  9959-23-736" << endl;
    cout << "\n\n\t\t--------------------------------------------" << endl;
    cout << "\t\t\t\t|               MENU GENERAL                |" << endl;
    cout << "\t\t ---------------------------------------------" << endl;

    cout << "\n\n\t\t1. Catalogos" << endl;
    cout << "\t\t2. Informes " << endl;
    cout << "\t\t3. Salir del Sistema" << endl;

    cout<<"\n\n\t\t-------------------------------"<<endl;
	cout<<"\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t-------------------------------"<<endl;
	cout<<"\n\n\t\tIngresa tu Opcion: ";
    cin>>options;
    system("cls");

    switch (options)
    {
case 1:
    subMenuCatalogos();
    break;
case 2:
    subMenuInformes();
    system("pause");
    system("cls");
    break;
case 3:
    exit(0);

default:
    cout << "Opcion invalida. Intente otra vez.";
    }
    } while (options != 3);
}

//Muestrá el submenu Catalogos
void subMenuCatalogos()
{
    persona rama;
    rama.menu();
}

//Muestra los archivos de informe
void subMenuInformes()
{
    persona rama;
    rama.desplegar();
}

