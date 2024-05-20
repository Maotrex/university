#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

// CLASES
class Persona
{
public:
    string nombre, apellido;
    int edad;
    // metodos persona
    Persona();
    virtual void imprimir();
};

class Cliente : public Persona
{
public: // atributos class "cliente"
    string address;
    string creditcardInfo;
    float accountBalance;
    // metodos cliente
    Cliente(); // Constructor
    void imprimir();
};

class Empleado : public Persona
{
private:
    int salario;

public:
    int id_empleado;
    string empresa;
    // Metodos empleado
    Empleado(int salario);
    void imprimir();
    void setSalario(int _salario)
    {
        if (salario > 0 && salario < 4000)
            salario = _salario;
        else
            cout << "Salario Invalido";
    }
    int getSalario();
};

// METODOS Y CONSTRUCTORES
Persona::Persona(){};
void Persona::imprimir()
{

    cout << "Ingrese su nombre: ";
    // elimina todos los espacios que puedan ser acarreados de la impresion anterior.
    cin >> ws;
    getline(cin, nombre);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "Ingrese su edad: ";
    std::cin >> edad;
};

Cliente::Cliente() : Persona() {}
void Cliente::imprimir()
{
    cout << "*********************************\n";
    cout << "******** Info. Cliente ********** \n";
    Persona::imprimir();
    cin.ignore();

    cout << "Ingrese su direccion: ";
    getline(cin, address);

    cout << "Ingrese su información de tarjeta de crédito o débito [credito/debito]: ";
    getline(cin, creditcardInfo);

    cout << "Ingrese su saldo actual: ";
    cin >> accountBalance;
    cin.ignore();
}

Empleado::Empleado(int salario) : Persona(), salario(0) { setSalario(salario); }
void Empleado::imprimir()
{
    cout << "**********************************\n";
    cout << "******** Info. Empleado ********** \n";
    Persona::imprimir();
    cin.ignore();

    cout << "Ingrese el numero ID del empleado:" << endl;
    cin >> id_empleado;
    cin.ignore();

    cout << "Ingrese el salario inicial del empleado:" << endl;
    cin >> salario;
    cin.ignore();

    cout << "ingrese la empresa a la que pertenece el empleado" << endl;
    getline(cin, empresa);
}
int Empleado ::getSalario()
{
    return salario;
}

// MAIN FUNCTION
int main()
{
    Persona *vector[2];
    vector[0] = new Cliente();
    vector[1] = new Empleado(0);

    vector[0]->imprimir();
    cout << "\n";
    vector[1]->imprimir();
};