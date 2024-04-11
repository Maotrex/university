#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Escuela
{
private:
    string nombre, apellido, titulo;
    float matricula;
    int edad;
    char sexo;

public:
    Escuela(int edad, const string &nombre, const string &apellido, const string &titulo, float &matricula, const char &sexo)
        : edad(edad), nombre(nombre), apellido(apellido), matricula(matricula), sexo(sexo), titulo(titulo) {} // constructor

    string getnombre() const
    {
        return nombre; // nombre
    }

    void setnombre(string nuevoNombre)
    {
        nombre = nuevoNombre;
    }

    string getapellido() const
    {
        return apellido; // apellido
    }

    void setapellido(string nuevoApellido)
    {
        apellido = nuevoApellido;
    }
    float getmatricula() const
    {
        return matricula;
    }

    void setmatricula(float nuevaMatricula)
    {
        matricula = nuevaMatricula; // matricula
    }
    int getedad() const
    {
        return edad;
    }

    void setedad(int nuevaEdad)
    {
        edad = nuevaEdad; // edad
    }
    char getsexo() const
    {
        return sexo;
    }

    void setSexo(char nuevoSexo)
    {
        sexo = nuevoSexo; // sexo
    }
    string gettitulo() const
    {
        return titulo;
    }

    void setTitulo(string nuevoTitulo)
    {
        titulo = nuevoTitulo; // titulo
    };
};

class registro : public Escuela
{
private:
public:
};
}
int main()
{

    return 0;
}