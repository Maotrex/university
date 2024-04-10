#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class alumno
{

private:
    string nombre;
    string apellido;
    float matricula;
    int edad;
    char sexo;

public:
    alumno(); // constructor

    void registrar()
    {
        cout << "Ingrese el Nombre del alumno: ";
        getline(cin, nombre);

        cout << "Ingrese Apellido: ";
        getline(cin, apellido);

        cout << "Ingrese su Edad: ";
        cin >> edad;

        cout << "Ingrese su sexo ";
        cin >> sexo;

        cout << "Ingrese su Número de Matrícula: ";
        cin >> matricula;
    };

    void ver_registro()
    {

        string respuesta;
        cout << "desea ver su información de registro?: [si/no]";
        if (respuesta == "si")
        {

            cout << "su nombre es: "
                 << nombre << endl;

            cout << "su apellido es: "
                 << apellido << endl;

            cout << "su edad es: "
                 << edad << endl;

            cout << "Genero [Masuculino: M / Femenino: F]"
                 << sexo << endl;
        }
    }
};

class profesor
{

private:
    string nombre;
    string apellido;
    string titulo_academico;
    int edad;
    char sexo;
    float cedula_profesional;

public:
    profesor(); // constructor
    void registrar();
    void ver_registro();
};

class materia
{

private:
    string nombre;
    int cuatrimestre;
    float no_de_creditos;

public:
    materia();
    void registrar();
    void ver_registro();
};

int main()
{

    return 0;
}