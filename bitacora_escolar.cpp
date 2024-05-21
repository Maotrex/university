#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

class Persona
{
public:
    int id, edad;
    string nombre, apellido, matricula;
    char sexo;
    Persona();
    virtual void registro();
    virtual void mostrar();
};

Persona::Persona() {} // CONSTRUCTOR PERSONA
void Persona::registro()
{
    cout << "Ingrese su Id:";
    std::cin >> id; // int
    cin.ignore();

    cout << "Ingrese su Nombre:";
    std::getline(std::cin, nombre);

    cout << "Ingrese su Apellido:";
    getline(cin, apellido);

    cout << "Ingrese su Edad:";
    std::cin >> edad;

    cout << "Ingrese su sexo [M/F]:";
    std::cin >> sexo;
};
void Persona::mostrar()
{
    cout << "ID: \n"
         << id << endl;
    cout << "Nombre: \n"
         << nombre << endl;
    cout << "Apellido: \n"
         << apellido << endl;
    cout << "Sexo: \n"
         << sexo << endl;
    cout << "Edad: \n"
         << edad << endl;
}

class Alumno : public Persona
{
public:
    string matricula;
    Alumno();
    void registro_alumno();
    void mostrar_alumno();
};

Alumno::Alumno() : Persona() {} // CONSTRUCTOR
void Alumno::registro_alumno()
{

    cout << "---- Registro Alumno ----" << endl;
    registro();
    cout << "Ingrese su matricula:";
    getline(cin, matricula);
    cin.ignore();
};
void Alumno::mostrar_alumno()
{
    cout << "**************************** \n";
    cout << "---------- Alumno ----------" << endl;
    cout << "**************************** \n";
    mostrar();
    cout << "matricula: " << matricula << endl;
};

class Materia
{
public:
    string nombre_materia;
    int id;
    Materia(); // Constructor
    void registro_materia();
    void mostrar_materia();
};
Materia::Materia() {} // Constructor
void Materia::registro_materia()
{
    cout << "---- Registro Materia ----" << endl;

    cout << "Ingrese su Id:";
    std::cin >> id; // int
    cin.ignore();

    cout << "Ingrese el Nombre de la materia:";
    std::getline(cin, nombre_materia);
};

void Materia::mostrar_materia()
{
    cout << "**************************** \n";
    cout << "---------- Materia----------" << endl;
    cout << "**************************** \n";
    cout << "ID: \n"
         << id << endl;
    cout << "Nombre Materia: \n"
         << nombre_materia << endl;
};

class Profesor : public Persona
{
public:
    string titulo;
    Profesor();
    void registro_profesor();
    void mostrar_profesor();
};
Profesor::Profesor() : Persona() {}
void Profesor::registro_profesor()
{
    cout << "---- Registro Profesor ----" << endl;
    registro();
    cin.ignore();
    cout << "Ingrese su Titulo:";
    getline(cin, titulo);
};

void Profesor::mostrar_profesor()
{
    cout << "**************************** \n";
    cout << "--------- Profesor --------" << endl;
    cout << "**************************** \n";
    mostrar();
    cout << "Titulo: \n"
         << titulo << endl;
};

int main()
{
    Alumno alumno1;
    Alumno alumno2;
    Alumno alumno3;

    Profesor profesor1;
    Profesor profesor2;
    Profesor profesor3;

    Materia materia1;
    Materia materia2;
    Materia materia3;
    Materia materia4;

    int menu_respuesta;
    int id_a_consultar;

    const int num_profesores = 3;
    const int num_alumnos = 3;
    const int num_materias = 4;

    Profesor profesores[num_profesores] = {
        profesor1, profesor2, profesor3};

    for (int i = 0; i < num_profesores; i++)
    {
        profesores[i].registro_profesor();
    }

    Materia materias[num_materias] = {
        materia1, materia2, materia3, materia4};

    for (int i = 0; i < num_materias; i++)
    {
        materias[i].registro_materia();
    }

    Alumno alumnos[num_alumnos] = {
        alumno1, alumno2, alumno3};

    for (int i = 0; i < num_alumnos; i++)
    {
        alumnos[i].registro_alumno();
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

                    profesores[i].mostrar_profesor();
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

                    materias[i].mostrar_materia();
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

                    alumnos[i].mostrar_alumno();
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
