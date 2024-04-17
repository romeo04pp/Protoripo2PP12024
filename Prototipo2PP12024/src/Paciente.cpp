#include "Paciente.h"

const string USUARIO = "Administrador";
const string PASSW = "1234";
using namespace std;

void Paciente::menu()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |  SISTEMA GESTION PACIENTES  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Pacientes"<<endl;
	cout<<"\t\t\t 2. Despliegue Pacientes"<<endl;
	cout<<"\t\t\t 3. Modifica Pacientes"<<endl;
	cout<<"\t\t\t 4. Busca Pacientes"<<endl;
	cout<<"\t\t\t 5. Borra Pacientes"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otro paciente(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		desplegar();
		break;
	case 3:
		modificar();
		break;
	case 4:
		buscar();
		break;
	case 5:
		borrar();
		break;
	case 6:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 6);
}
void persona::insertar()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles Persona ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id Paciente         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre Paciente     : ";
	cin>>name;
	cout<<"\t\t\tIngresa Contraseña Paciente   : ";
	cin>>pass;
	file.open("Pacientes.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< pass << "\n";
	file.close();
}
