#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

// Clase Materia
class Materia
{
private:
    int ID;
    std::string nombre;
    std::string matricula;

public:
    // Constructor por defecto
    Materia() : ID(0), nombre(""), matricula("") {}

    // Constructor con parámetros
    Materia(int id, const std::string &nombreMateria, const std::string &matriculaMateria)
        : ID(id), nombre(nombreMateria), matricula(matriculaMateria) {}

    // Getters
    int getID() const
    {
        return ID;
    }

    std::string getNombre() const
    {
        return nombre;
    }

    std::string getMatricula() const
    {
        return matricula;
    }

    // Mostrar información de la materia
    void mostrarInformacion() const
    {
        std::cout << "ID: " << ID << "\n";
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Matrícula: " << matricula << "\n";
    }
};

// Clase Alumno
class Alumno
{
private:
    int ID;
    std::string nombre;
    std::string apellido;
    int edad;
    int numeroMatricula;
    std::string sexo;

public:
    // Constructor por defecto
    Alumno() : ID(0), nombre(""), apellido(""), edad(0), numeroMatricula(0), sexo("") {}

    // Constructor con parámetros
    Alumno(int id, const std::string &nombreAlumno, const std::string &apellidoAlumno, int edadAlumno, int numMatricula, const std::string &sexoAlumno)
        : ID(id), nombre(nombreAlumno), apellido(apellidoAlumno), edad(edadAlumno), numeroMatricula(numMatricula), sexo(sexoAlumno) {}

    // Getters
    int getID() const
    {
        return ID;
    }

    std::string getNombre() const
    {
        return nombre;
    }

    std::string getApellido() const
    {
        return apellido;
    }

    int getEdad() const
    {
        return edad;
    }

    int getNumeroMatricula() const
    {
        return numeroMatricula;
    }

    std::string getSexo() const
    {
        return sexo;
    }

    // Mostrar información del alumno
    void mostrarInformacion() const
    {
        std::cout << "ID: " << ID << "\n";
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Apellido: " << apellido << "\n";
        std::cout << "Edad: " << edad << "\n";
        std::cout << "Número de Matrícula: " << numeroMatricula << "\n";
        std::cout << "Sexo: " << sexo << "\n";
    }
};

// Clase Profesor
class Profesor
{
private:
    int ID;
    std::string nombre;
    std::string apellido;
    std::string matricula;
    std::string titulo;

public:
    // Constructor por defecto
    Profesor() : ID(0), nombre(""), apellido(""), matricula(""), titulo("") {}

    // Constructor con parámetros
    Profesor(int id, const std::string &nombreProfesor, const std::string &apellidoProfesor, const std::string &matriculaProfesor, const std::string &tituloProfesor)
        : ID(id), nombre(nombreProfesor), apellido(apellidoProfesor), matricula(matriculaProfesor), titulo(tituloProfesor) {}

    // Getters
    int getID() const
    {
        return ID;
    }

    std::string getNombre() const
    {
        return nombre;
    }

    std::string getApellido() const
    {
        return apellido;
    }

    std::string getMatricula() const
    {
        return matricula;
    }

    std::string getTitulo() const
    {
        return titulo;
    }

    // Mostrar información del profesor
    void mostrarInformacion() const
    {
        std::cout << "ID: " << ID << "\n";
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Apellido: " << apellido << "\n";
        std::cout << "Matrícula: " << matricula << "\n";
        std::cout << "Título: " << titulo << "\n";
    }
};

int main()
{
    // Colecciones para almacenar registros
    std::unordered_map<int, Profesor> profesores;
    std::unordered_map<int, Materia> materias;
    std::unordered_map<int, Alumno> alumnos;

    int opcion;
    int id;

    // Capturar registros
    std::cout << "Captura de 2 profesores:\n";
    for (int i = 0; i < 2; i++)
    {
        int id = i + 1;
        std::string nombre, apellido, matricula, titulo;
        std::cout << "Profesor " << id << "\n";
        std::cout << "Nombre: ";
        std::cin.ignore(); // Limpiar buffer de entrada
        std::getline(std::cin, nombre);
        std::cout << "Apellido: ";
        std::getline(std::cin, apellido);
        std::cout << "Matrícula: ";
        std::getline(std::cin, matricula);
        std::cout << "Título o profesión: ";
        std::getline(std::cin, titulo);

        // Crear y agregar profesor a la colección
        Profesor profesor(id, nombre, apellido, matricula, titulo);
        profesores[id] = profesor;
    }

    std::cout << "\nCaptura de 3 materias:\n";
    for (int i = 0; i < 3; i++)
    {
        int id = i + 1;
        std::string nombre, matricula;
        std::cout << "Materia " << id << "\n";
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        std::cout << "Matrícula: ";
        std::getline(std::cin, matricula);

        // Crear y agregar materia a la colección
        Materia materia(id, nombre, matricula);
        materias[id] = materia;
    }

    std::cout << "\nCaptura de 2 alumnos:\n";
    for (int i = 0; i < 2; i++)
    {
        int id = i + 1;
        std::string nombre, apellido, sexo;
        int edad, numMatricula;
        std::cout << "Alumno " << id << "\n";
        std::cout << "Nombre: ";
        std::getline(std::cin, nombre);
        std::cout << "Apellido: ";
        std::getline(std::cin, apellido);
        std::cout << "Edad: ";
        std::cin >> edad;
        std::cout << "Número de Matrícula: ";
        std::cin >> numMatricula;
        std::cin.ignore(); // Limpiar buffer de entrada
        std::cout << "Sexo: ";
        std::getline(std::cin, sexo);

        // Crear y agregar alumno a la colección
        Alumno alumno(id, nombre, apellido, edad, numMatricula, sexo);
        alumnos[id] = alumno;
    }

    // Menú para visualizar registros por ID
    do
    {
        std::cout << "\n--- Menú ---\n";
        std::cout << "1. Visualizar información de profesor\n";
        std::cout << "2. Visualizar información de materia\n";
        std::cout << "3. Visualizar información de alumno\n";
        std::cout << "4. Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        if (opcion >= 1 && opcion <= 3)
        {
            std::cout << "Ingresa el ID del registro: ";
            std::cin >> id;
        }

        switch (opcion)
        {
        case 1:
            // Visualizar información de profesor
            if (profesores.find(id) != profesores.end())
            {
                profesores[id].mostrarInformacion();
            }
            else
            {
                std::cout << "Profesor con ID " << id << " no encontrado.\n";
            }
            break;
        case 2:
            // Visualizar información de materia
            if (materias.find(id) != materias.end())
            {
                materias[id].mostrarInformacion();
            }
            else
            {
                std::cout << "Materia con ID " << id << " no encontrada.\n";
            }
            break;
        case 3:
            if (alumnos.find(id) != alumnos.end())
            {
                alumnos[id].mostrarInformacion();
            }
            else
            {
                std::cout << "Alumnos con ID " << id << " no encontrada.\n";
            }
            break;
        }
    } while (opcion != 3);
}