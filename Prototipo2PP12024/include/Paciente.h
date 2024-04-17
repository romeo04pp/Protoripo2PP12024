#ifndef PERSONA_H
#define PERSONA_H
//Librerias
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class paciente//Clase paciente para iniciar sesion
{
	private:
    string id, name, apellido, date, genero, adress, phone, contrasenas;
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
		bool loginPersona();
        bool buscarLoginPersona(string user, string passw);
};


#endif // PERSONA_H
