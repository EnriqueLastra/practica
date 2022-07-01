#include <iostream>
#include <String>

	std::string Clientes [5] [3] ;
	std::string Empleados [5] [3];
	int boton,boton2,salida=0;
	
void menu();
void MostrarEM();
void AgregarEM();
void EliminarEM();
void exit();
int main() 
{
	RESET:
	menu();
	
	switch (boton)
	{
		case 1:
			MostrarEM();
			system("pause");
			system("CLS");
			break;
		case 2:
			
			break;
		case 3:
			AgregarEM();
			break;
		case 4:
			break;
		case 5:
			EliminarEM();
			system("pause");
			system("CLS");
			break;
		case 6:
			break;
		case 7:
			exit();
			break;
		default:
		break;		
	}
	if (salida==0)
	{
		boton=0;
		goto RESET;
	}
	return 0;
}


void menu()
{
	std::cout << " \t\t| | REGISTRO DE TRABAJO | |\n\n\n" << "1.Mostrar Empleados\n2.Mostrar Clientes\n3.Agregar Empleados\n4.Agregar Clientes\n5.Eliminar Empleados\n6.Eliminar Clientes\n7.Salir\n\n";
	std::cin >> boton;
	system("CLS");
}
void MostrarEM()
{
	for(int i = 0 ; i < 5 ; i++)
	{
		std::cout << i + 1 << ". \t" << Empleados [i][0] << " " << Empleados [i][1] << "\t" << Empleados[i][2] << "\n";
	}
	std::cout << "\n";
}
void AgregarEM()
{

	std::cout << "\t AGREGAR EMPLEADOS \n\n";
	std::cout << "Seleccione la casilla (1-5)\n";
	std::cin >> boton2;
	
		if(!Empleados[boton2-1][0].empty())
		{
			std::cout << "\n\nEsa casilla esta ocupada por: " << Empleados[boton2-1] [0] << " " << Empleados [boton2-1][1];
			std::cout << "\nDesea CONTINUAR?\n1.SI\n2.NO\n";
			std::cin >> boton;
			
			if(boton == 1)
			{
			std::cout << "\nIngrese Nombre: ";
			std::cin >> Empleados[boton2-1][0];
			std::cout << "\nIngrese Apellido: ";
			std::cin >> Empleados[boton2-1][1];
			std::cout << "\nIngrese telefono: ";
			std::cin >> Empleados[boton2-1][2];
			std::cout << "\n";
			system("pause");
			system("CLS");
			}
			else if (boton == 2)
			{
			system("pause");
			system("CLS");
			}
		}
		else
		{

		std::cout << "\nIngrese Nombre: ";
		std::cin >> Empleados[boton2-1][0];
		std::cout << "\nIngrese Apellido: ";
		std::cin >> Empleados[boton2-1][1];
		std::cout << "\nIngrese telefono: ";
		std::cin >> Empleados[boton2-1][2];
		std::cout << "\n";
		system("pause");
		system("CLS");
		}
}
void EliminarEM()
{
	std::cout << "\t\tELIMINAR EMPLEADOS\n";
	MostrarEM();
	std::cout << "\n Seleccione Empleado (1-5)\n\n";
	std::cin >> boton;
	system("CLS");
	std::cout << "ESTA SEGURO DE ELIMINAR A: " << Empleados[boton-1][0]<<" "<<Empleados[boton-1][1]<<"/n";
	std::cout << "\nDesea CONTINUAR?\n1.SI\n2.NO\n";
	std::cin >> boton2;
	
	if (boton2==1)
	{
		for(int i = boton ; i<5 ; i++)
		{
				for (int j = 0; j < 3; j++)
            {
                Empleados[i - 1][j] = Empleados[i][j];
            }
		}
		for (int j = 0; j < 3; j++)
        {
            Empleados[4][j].clear();
        }
	}
	else 
	{
		
	}
	}
	void exit()
	{
		std::cout << "ESTA SEGURO DE SALIR?\n\n1.SI\t\t2.NO\n\n";
		std::cin >> boton;
		if (boton==1)
		{
			salida+=1;
		}
		else
		{
			system("CLS");
		}
	}

