#include "Paciente.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

const string USUARIO = "Administrador";
const string PASSW = "1234";
using namespace std;

void paciente::menu()
{
    system("cls");
    int choice;
    bool repetir = true;
    char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA SUCURSALES PACIENTES  |"<<endl;
	cout<<"\t\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t 1. Alta de Pacientes (Ingreso) "<<endl;
	cout<<"\t\t\t 2. Baja de Pacientes (Borrado) "<<endl;
	cout<<"\t\t\t 3. Modificaciones Pacientes"<<endl;
	cout<<"\t\t\t 4. Consulta de Pacientes"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Desea Agregar Otro Paciente? (Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		borrar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		repetir = false;
		system("cls");
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(repetir);
}
void paciente::insertar()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Alta (Ingreso) de Pacientes ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Paciente             : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre Paciente             : ";
	cin>>name;
	cout<<"\t\t\tIngresa Apellido del Paciente       : ";
	cin>>apellido;
	cout<<"\t\t\tIngresa Fecha Nacimiento Paciente   : ";
	cin>>date;
	cout<<"\t\t\tIngresa Genero del Paciente         : ";
	cin>>genero;
	cout<<"\t\t\tIngresa Direccion del Paciente      : ";
	cin>>adress;
	cout<<"\t\t\tIngresa Telefono del Paciente       : ";
	cin>>phone;
	cout<<"\t\t\tIngresa Contraseña del Paciente : ";
	cin>>contrasenas;
	file.open("Pacientes.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< date <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< adress <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< contrasenas << "\n";
	file.close();
}
void paciente::desplegar()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Imprimir Informe de Pacientes -------------------------"<<endl;
	file.open("Pacientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Paciente        : "<<id<<endl;
			cout<<"\n\n\t\t\t Nombre Paciente  : "<<name<<endl;
			cout<<"\t\t\t     Apellido Paciente        : "<<apellido<<endl;
			cout<<"\n\n\t\t\t Naciemiento Paciente  : "<<date<<endl;
			cout<<"\t\t\t     Genero Paciente        : "<<genero<<endl;
			cout<<"\t\t\t     Direccion Paciente     : "<<adress<<endl;
			cout<<"\t\t\t     Telefono Paciente : "<<phone<<endl;
			cout<<"\t\t\t     Contraseña Paciente    : "<<contrasenas<<endl<<endl<<endl;
			file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void paciente::modificar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion Paciente-------------------------"<<endl;
	file.open("Pacientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del PAciente que quiere modificar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			    file1 <<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< date <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< adress <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< contrasenas << "\n";

			}
			else
			{


                cout<<"\t\t\tIngresa Id del Paciente             : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre Paciente             : ";
	cin>>name;
	cout<<"\t\t\tIngresa Apellido del Paciente       : ";
	cin>>apellido;
	cout<<"\t\t\tIngresa Fecha Nacimiento Paciente   : ";
	cin>>date;
	cout<<"\t\t\tIngresa Genero del Paciente         : ";
	cin>>genero;
	cout<<"\t\t\tIngresa Direccion del Paciente      : ";
	cin>>adress;
	cout<<"\t\t\tIngresa Telefono del Paciente       : ";
	cin>>phone;
	cout<<"\t\t\tIngresa Contraseña del Paciente : ";
	cin>>contrasenas;

file1 <<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< date <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< adress <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< contrasenas << "\n";

				found++;
			}
			file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;

		}
		file1.close();
		file.close();
		remove("Pacientes.txt");
		rename("Record.txt","Pacientes.txt");
	}
}
void paciente::buscar()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Pacientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos del Paciente Buscado------------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n-------------------------Datos del Empleado Buscado------------------------"<<endl;
		cout<<"\nIngrese Id del Empleado que quiere buscar: ";
		cin>>participant_id;
		file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		while(!file.eof())
		{
			if(participant_id==id)
			{
				cout<<"\n\n\t\t\t Id Paciente        : "<<id<<endl;
			cout<<"\n\n\t\t\t Nombre Paciente  : "<<name<<endl;
			cout<<"\t\t\t     Apellido Paciente        : "<<apellido<<endl;
			cout<<"\n\n\t\t\t Naciemiento Paciente  : "<<date<<endl;
			cout<<"\t\t\t     Genero Paciente        : "<<genero<<endl;
			cout<<"\t\t\t     Direccion Paciente     : "<<adress<<endl;
			cout<<"\t\t\t     Telefono Paciente : "<<phone<<endl;
			cout<<"\t\t\t     Contraseña Paciente    : "<<contrasenas<<endl<<endl<<endl;
				found++;
			}
			file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Paciente no encontrado...";
		}
		file.close();
	}
}
void paciente::borrar()
{
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Baja (Borrado) del PAciente-------------------------"<<endl;
	file.open("Pacientes.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id de la Persona que quiere borrar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
                file1 <<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< date <<std::left<<std::setw(15)<< genero <<std::left<<std::setw(15)<< adress <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< contrasenas << "\n";

			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("Pacientes.txt");
		rename("Record.txt","Pacientes.txt");
	}
}

bool paciente::loginPersona() //Login de Inicio de sesión para jugadores Registrados
{
    string usuario, contra;
    int contador=0;
    bool ingresa=false;
    do{
        system("cls");
        cout<<"--------------------------"<<endl;
        cout<<"AUTENTICACION DE USUARIOS "<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Nombre de usuario: ";
        //getline
        getline(cin, usuario);
        cout<<"\ncontrasena: ";
        char caracter;
        caracter= getch();
        contra="";
        while (caracter !=13)
        {
            if(caracter !=8)
            {
                contra.push_back(caracter);
                cout<<"*";
            } else
            {
                if (contra.length() > 0)
                {
                    cout<<"\b \b";
                    contra = contra.substr(0, contra.length()-1);
                }
            }
            caracter = getch();
        }

        if (buscarLoginPersona(usuario, contra)){   //Pide los parametro de la funcion BuscarLoginJugador para iniciar sesión
            ingresa=true;
        } else {
            cout<<"\nEl usuario y/o contrasena son incorrectos"<<endl;
            cin.get();
            contador++;
        }
    } while (ingresa==false && contador<3);
    if (ingresa==false){
        cout<<"\nLo siento, no puede ingresar al sistema, sus contrasenas son invalidas o se agotaron intentos"<<endl;
        cin.get();
    } else {
        cout<<"\n=== Bienvenidos al Sistema ==="<<endl;
        cin.get();
    }
    return ingresa;
}

bool paciente::buscarLoginPersona(string user, string passw)
{
    system ("cls");
    fstream file;
    int found=0;
    file.open("Pacientes.txt", ios::in);
    if (!file)
    {
        cout<<"\n---------------------------Datos de la Persona buscado----------------------"<<endl;
        cout<<"\n\t\t\tNo hay informacion...";
    }
    else
    {
        file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
        while(!file.eof())
        {
            if(user==name || user == USUARIO)
            {
                if (passw == contrasenas || passw == PASSW)
                {
                    found++;
                }
            }
            file >> id >> name >> apellido >> date >> genero >> adress >> phone >> contrasenas;
        }
        if(found==0)
        {
            return false;
        }
        else
            return true;

        file.close();}
}
