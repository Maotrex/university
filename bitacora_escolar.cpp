#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

class Alumno
{

public:
    int id;
    string nuevoNombre, nuevoApellido, nuevaMatricula;
    char nuevoSexo;
    int nuevaEdad;
    Alumno();

    void registro()
    {
        cout << "---- Registro Alumno ----" << endl;
        cout << "Ingrese su Id:";
        std::cin >> id; // int
        cin.ignore();

        cout << "Ingrese su Nombre:";
        std::getline(std::cin, nuevoNombre);

        cout << "Ingrese su Apellido:";
        getline(cin, nuevoApellido);

        cout << "Ingrese su matricula:";
        getline(cin, nuevaMatricula); // string

        cout << "Ingrese su sexo [M/F]:";
        std::cin >> nuevoSexo;

        cout << "Ingrese su edad:";
        std::cin >> nuevaEdad; // int
        cin.ignore();
    };

    void mostrar()
    {
        cout << "**************************** \n";
        cout << "---------- Alumno ----------" << endl;
        cout << "**************************** \n";
        cout << "ID: \n"
             << id << endl;
        cout << "Nombre: \n"
             << nuevoNombre << endl;
        cout << "Apellido: \n"
             << nuevoApellido << endl;
        cout << "Matricula: \n"
             << nuevaMatricula << endl;
        cout << "Sexo: \n"
             << nuevoSexo << endl;
        cout << "Edad: \n"
             << nuevaEdad << endl;
    };
};

Alumno::Alumno()
{
}

class Materia
{
public:
    int id;
    string matricula, nombre_materia;
    Materia(); // Constructor

    void setnombre_materia(string nuevoNombre_materia)
    {
        nombre_materia = nuevoNombre_materia;
    }

    string getnombre_materia() const
    {

        return nombre_materia;
    }

    void setmatricula(float nuevaMatricula)
    {
        matricula = nuevaMatricula;
    }

    string getmatricula() const
    {

        return matricula;
    }

    void registro()
    {
        cout << "---- Registro Materia ----" << endl;

        cout << "Ingrese su Id:";
        std::cin >> id; // int
        cin.ignore();

        cout << "ingrese su numero de matricula" << endl;
        std::getline(cin, matricula);

        cout << "Ingrese el Nombre de la materia:";
        std::getline(cin, nombre_materia);
    };

    void mostrar()
    {
        cout << "**************************** \n";
        cout << "---------- Materia----------" << endl;
        cout << "**************************** \n";
        cout << "ID: \n"
             << id << endl;
        cout << "Matricula: \n"
             << matricula << endl;
        cout << "Nombre Materia: \n"
             << nombre_materia << endl;
    };
};

Materia::Materia()
{
}

class Profesor
{
public:
    int id;
    string nombre, apellido, titulo;
    char sexo;
    int edad;

    Profesor();

    void registro()
    {
        cout << "---- Registro Profesor ----" << endl;
        cout << "Ingrese su Id:";
        std::cin >> id; // int
        cin.ignore();

        cout << "Ingrese su Nombre:";
        std::getline(std::cin, nombre);

        cout << "Ingrese su Apellido:";
        getline(cin, apellido);

        cout << "Ingrese su Titulo:";
        getline(cin, titulo);

        cout << "Ingrese su sexo [M/F]:";
        std::cin >> sexo;

        cout << "Ingrese su edad:";
        std::cin >> edad; // int
        cin.ignore();
    };

    void mostrar()
    {
        cout << "**************************** \n";
        cout << "--------- Profesor --------" << endl;
        cout << "**************************** \n";
        cout << "ID: \n"
             << id << endl;
        cout << "Nombre: \n"
             << nombre << endl;
        cout << "Apellido: \n"
             << apellido << endl;
        cout << "Titulo: \n"
             << titulo << endl;
        cout << "Matricula: \n"
             << sexo << endl;
        cout << "Sexo: \n"
             << edad << endl;
    };
};

Profesor::Profesor()
{
}

int main()
{
    Alumno alumno1;
    Alumno alumno2;

    Profesor profesor1;
    Profesor profesor2;

    Materia materia1;
    Materia materia2;
    Materia materia3;

    int menu_respuesta;
    int id_a_consultar;

    const int num_profesores = 2;
    const int num_alumnos = 2;
    const int num_materias = 3;

    Profesor profesores[num_profesores] = {
        profesor1, profesor2};

    for (int i = 0; i < num_profesores; i++)
    {
        profesores[i].registro();
    }

    Materia materias[num_materias] = {
        materia1, materia2, materia3};

    for (int i = 0; i < num_materias; i++)
    {
        materias[i].registro();
    }

    Alumno alumnos[num_alumnos] = {
        alumno1, alumno2};

    for (int i = 0; i < num_alumnos; i++)
    {
        alumnos[i].registro();
    }

    do
    {
        cout << "======MENU======" << endl;
        cout << "Desea visualizar:" << endl;
        cout << "1. Profesor" << endl;
        cout << "2. Materia" << endl;
        cout << "3. Alumno" << endl;
        cout << "4. Salir" << endl;

        cin >> menu_respuesta;
        cin.ignore();

        switch (menu_respuesta)
        {
        case 1:
            cout << "Ingrese Id del Profesor a consultar:";
            std::cin >> id_a_consultar; // int
            cin.ignore();
            for (int i = 0; i < num_profesores; i++)
            {
                if (profesores[i].id == id_a_consultar)
                {

                    profesores[i].mostrar();
                }
            }
            break;

        case 2:
            cout << "Ingrese Id de la Materia a consultar:";
            std::cin >> id_a_consultar; // int
            cin.ignore();
            for (int i = 0; i < num_materias; i++)
            {
                if (materias[i].id == id_a_consultar)
                {

                    materias[i].mostrar();
                }
            }
            break;

        case 3:
            cout << "Ingrese Id del Alumno a consultar:";
            std::cin >> id_a_consultar; // int
            cin.ignore();
            for (int i = 0; i < num_alumnos; i++)
            {
                if (alumnos[i].id == id_a_consultar)
                {

                    alumnos[i].mostrar();
                }
            }
            break;

        case 4:
            cout << "saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion invalida, vuelve a intentarlo" << endl;
            break;
        };
    } while (menu_respuesta != 4);

    return 0;
}