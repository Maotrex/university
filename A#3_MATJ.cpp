#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Cliente
{

private: // atributos o variables class "cliente"
    string customerName;
    string address;
    string email;
    string creditcardInfo;
    float accountBalance;

public:        // metodos
    Cliente(); // Constructor
    void signup();
    void showInfo();
};

// Constructor, nos sirve para inicializar los atributos
Cliente::Cliente()
{
}

void Cliente::signup()
{
    cout << "**************************** \n";
    cout << "******** Registro ********** \n";
    cout << "Ingrese su nombre: ";
    // elimina todos los espacios que puedan ser acarreados de la impresion anterior.
    cin >> ws;
    getline(cin, customerName);

    cout << "Ingrese su direccion: ";
    getline(cin, address);

    cout << "Ingrese su correo electronico: ";
    getline(cin, email);

    cout << "Ingrese su información de tarjeta de crédito o débito [credito/debito]: ";
    getline(cin, creditcardInfo);

    cout << "Ingrese su saldo actual: ";
    cin >> accountBalance;
}

void Cliente::showInfo()
{
    string respuesta;

    cout << "**************************** \n";
    cout << "******* Bienvenido ********* \n";
    cout << "Desea consultar su información? [si/no]: ";
    cin >> respuesta;

    if (respuesta == "si" || respuesta == "yes")
    {
        cout << "**************************** \n";
        cout << "****** Buenas tardes ******* \n";
        cout << "Bienvenido a su cuenta, " << customerName << ". La informacion de su cuenta es:\n " << endl;
        cout << "Nombre: \n"
             << customerName << endl;
        cout << "Direccion: \n"
             << address << endl;
        cout << "Email: \n"
             << email << endl;
        cout << "Informacion de tarjeta: \n"
             << creditcardInfo << endl;
        cout << "Saldo actual: \n"
             << accountBalance << endl;
    }
    else
    {
        cout << "Gracias por su visita." << endl;
    }
}

int main()
{
    Cliente cliente1;
    cliente1.signup();
    cliente1.showInfo();

    Cliente cliente2;
    cliente2.signup();
    cliente2.showInfo();

    Cliente cliente3;
    cliente3.signup();
    cliente3.showInfo();

    return 0;
}