#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

// CLASES
class Persona
{
private:
    std::string nombre, apellido;
    int edad;

public:
    Persona();
    // AGREGAR METODOS SETTERS Y GETTERS
    virtual void imprimir();
};

class Cliente : public Persona
{
private: // atributos class "cliente"
    string address;
    string creditcardInfo;
    float accountBalance;

public:        // metodos
    Cliente(); // Constructor
    void imprimir();
};

class Empleado : public Persona
{
private:
    int id_empleado, salario;
    string empresa;

public:
    Empleado();
    void imprimir();
};

// METODOS Y CONSTRUCTORES
Persona::Persona(){};
void Persona::imprimir()
{

    cout << "**************************** \n";
    cout << "******** Registro ********** \n";
    cout << "Ingrese su nombre: ";
    // elimina todos los espacios que puedan ser acarreados de la impresion anterior.
    cin >> ws;
    getline(cin, nombre);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su edad: ";
    std::cin >> edad;
    cin.ignore();
};

Cliente::Cliente() : Persona() {}
void Cliente::imprimir()
{
    imprimir();
    cin.ignore();
    cout << "Ingrese su direccion: ";
    getline(cin, address);

    cout << "Ingrese su información de tarjeta de crédito o débito [credito/debito]: ";
    getline(cin, creditcardInfo);

    cout << "Ingrese su saldo actual: ";
    cin >> accountBalance;
    cin.ignore();
}

Empleado::Empleado() : Persona() {}
void Empleado::imprimir()
{
    imprimir();
    cin.ignore();
    cout << "Ingrese el numero ID del empleado:" << endl;
    cin >> id_empleado;
    cin.ignore();
    cout << "Ingrese el salario base del empleado:" << endl;
    cin >> salario;
    cin.ignore();
    cout << "ingrese la empresa del empleado" << endl;
    getline(cin, empresa);
}

// MAIN FUNCTION
int main()
{

    Persona p1;
    p1.imprimir();
};