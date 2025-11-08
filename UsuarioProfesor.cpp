#include "UsuarioProfesor.h"
#include "UsuarioAlumno.h"
#include "UsuarioAdmin.h"

// Este constructor EXTIENDE el constructor de la clase Usuario, es decir, 
// hace lo mismo (poner el nombre de usuario y el completo), 
// pero también cosas extras (asignar las 2 materias).
UsuarioProfesor::UsuarioProfesor(string _nombreDeUsuario, string _nombreCompleto) :
	Usuario(_nombreDeUsuario, _nombreCompleto)
{
	nombresDeMaterias.Append("IA");
	nombresDeMaterias.Append("Programación Orientada a Objetos");
}

void UsuarioProfesor::MostrarOpciones()
{
	cout << "Hola " << ObtenerNombreCompleto() << endl;
	cout << "Presione 1 para ver las clases impartidas; 2 para salir" << endl;
	int opcionElegida = 0;
	cin >> opcionElegida;
	// si se presionó 1
	if (opcionElegida == 1)
	{
		// Entonces mostramos más opciones
		cout << "Presione 1 para ir a las calificaciones de IA; " <<
			"presione 2 para ir a las calificaciones de POO; presione 3 para regresar" << endl;
		cin >> opcionElegida;
		if (opcionElegida == 1)
		{
			cout << "las calificaciones de IA son: XXXXXXX" << endl;
		}
		else if (opcionElegida == 2)
		{
			cout << "las calificaciones de POO son: XXXXXXX" << endl;
		}
		else if (opcionElegida == 3)
		{
			cout << "Gracias por usar el sistema. Ha salido." << endl;
		}
		else
		{
			cout << "Opción inválida, saliendo del sistema." << endl;
		}
	}
	else if (opcionElegida == 2)
	{
		cout << "Gracias por usar el sistema. Ha salido." << endl;
	}
	else
	{
		cout << "Opción inválida, saliendo del sistema." << endl;
	}

	cout << "Gracias por usar el sistema. " << ObtenerNombreCompleto() << " \n\n";
}

void DemostracionHerenciaClaseUsuario()
{
	UsuarioProfesor myProfesor("AdrianGonzalez", "Adrian Ulises Gonzalez");

	UsuarioAlumno myAlumno("JuanPerez", "Juan Perez Gomez");

	UsuarioAdmin myAdmin("Admin", "El admin perron");
	myAdmin.AgregarUsuario(&myProfesor);
	myAdmin.AgregarUsuario(&myAlumno);
	myAdmin.AgregarUsuario(&myAdmin);


	Usuario* arrayUsuarios[3] = {&myProfesor, &myAlumno, &myAdmin};
	for (int i = 0; i < 3; i++)
		arrayUsuarios[i]->MostrarOpciones();


}
